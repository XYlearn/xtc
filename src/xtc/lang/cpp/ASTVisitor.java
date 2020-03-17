package xtc.lang.cpp;

import net.sf.javabdd.BDD;
import xtc.tree.GNode;
import xtc.tree.Location;
import xtc.tree.Node;
import xtc.tree.Visitor;
import xtc.util.NodeUtilities;
import xtc.util.Utilities;
import xtc.util.Runtime;

import java.io.File;
import java.lang.reflect.Method;
import java.util.*;

/**
 * Visitor that traverse AST and collect features.
 */
public class ASTVisitor extends Visitor {

    protected PresenceConditionManager pcm;

    /** global symbol table */
    protected CParsingContext.SymbolTable symtab;

    /** local symbol table */
    protected CParsingContext.SymbolTable lsymtab = null;

    /** presence condition of current function */
    protected PresenceConditionManager.PresenceCondition funcPc;

    protected Map<String, EnumSet<MacroUsage>> macroUsage;

    protected String workdir = "";

    private PresenceConditionManager.PresenceCondition one, zero;

    private Map<PresenceConditionManager.PresenceCondition, PresenceConditionManager.PresenceCondition> pcCache = new HashMap<>();

    private boolean showErrors = false;

    private boolean collectUsage = false;

    private boolean extractFeature = false;

    private Runtime runtime;

    /**
     * ASTVisitor Constructor.
     * @param pcm
     */
    public ASTVisitor(Runtime runtime, PresenceConditionManager pcm, CParsingContext.SymbolTable symtab) {
        showErrors = runtime.test("showErrors");
        collectUsage = runtime.test("collectUsage");
        extractFeature = runtime.test("extractFeature");
        this.runtime = runtime;
        this.pcm = pcm;
        this.symtab = symtab;
        one = pcm.new PresenceCondition(true);
        zero = pcm.new PresenceCondition(false);
        funcPc = one;
        cache     =
            new LinkedHashMap<CacheKey, Method>(CACHE_CAPACITY, CACHE_LOAD, true) {
                protected boolean removeEldestEntry(Map.Entry e) {
                    return size() > CACHE_SIZE;
                }
            };
        key       = new CacheKey(null, null);
        arguments = new Object[]   { null, null };
        argTypes  = new Class<?>[] { GNode.class, PresenceConditionManager.PresenceCondition.class };

        if (collectUsage) {
            macroUsage = new HashMap<>();
        }
    }

    public void setWorkdir(String workdir) { this.workdir=workdir; }

    public boolean inFunction() {
        return lsymtab != null;
    }

    public Map<String, EnumSet<MacroUsage>> getMacroUsage() {
        return macroUsage;
    }

    /**
     * Dispatch node together with its presence condition.
     * @param n node.
     * @param pc presence condition.
     * @return ASTVisitor.
     */
    public ASTVisitor dispatch(final Node n, PresenceConditionManager.PresenceCondition pc) {
        arguments[1] = pc;
        dispatch(n);
        return this;
    }

    /** Default visit function */
    public ASTVisitor visit(GNode n, PresenceConditionManager.PresenceCondition pc) {
        // visit all children nodes
        for (int i = 0; i < n.size(); ++i) {
            Object o = n.get(i);
            if (o instanceof GNode) {
                dispatch((GNode) o, pc);
            } else if (o instanceof Syntax.Text) {
                dispatch((Syntax.Text) o, pc);
            }
        }
        if (collectUsage && inFunction()) {
            assignUsage(pc, MacroUsage.PART_FUNC);
        }
        return this;
    }

    /** Visit Text and extract Number Features */
    public ASTVisitor visit(Syntax.Text n, PresenceConditionManager.PresenceCondition pc) {
        Enum<CTag> tag = ((Syntax.Text) n).tag();
        String s = Utilities.unescape_perl_string(n.getTokenText());
        Number num = null;
        if (extractFeature) {
            try {
                if (tag.equals(CTag.CHARACTERconstant)) {
                    num = (int) s.charAt(1);
                } else {
                    s = s.replaceAll("l|L|U|u", "");
                    if (tag.equals(CTag.FLOATINGconstant)) {
                        num = Double.valueOf(s);
                    } else if (tag.equals(CTag.INTEGERconstant)) {
                        num = Integer.valueOf(s, 10);
                    } else if (tag.equals(CTag.OCTALconstant)) {
                        if (s.startsWith("0") && s.length() > 1) {
                            s = s.substring(1);
                        }
                        num = Integer.valueOf(s, 8);
                    } else if (tag.equals(CTag.HEXconstant)) {
                        num = Integer.valueOf(s.substring(2, s.length()), 16);
                    }
                }
            } catch (NumberFormatException e) {
            }
            if (null != num && !num.equals(0)) {
                if (num instanceof Integer && Math.abs(num.intValue()) < 10) {
                } else {
                    Feature feature = new Feature(Feature.FeatureType.NUMBER, num);
                    addFeature(pc.restrict(funcPc), feature);
                }
            }
        }
        if (collectUsage) {
            assignUsage(pc, MacroUsage.CONST);
        }
        return this;
    }

    /** Visit Languange, skip */
    public ASTVisitor visit(Syntax.Language n, PresenceConditionManager.PresenceCondition pc) {
        return this;
    }

    /** Visit Conditional node */
    public ASTVisitor visitConditional(GNode n, PresenceConditionManager.PresenceCondition pc) {
        assert n.size() % 2 == 0;
        for (int i = 0; i < n.size(); i += 2) {
            PresenceConditionManager.PresenceCondition childPc = (PresenceConditionManager.PresenceCondition)n.get(i);
            Node child = n.getNode(i + 1);
            dispatch(child, childPc);
        }
        return this;
    }

    /** Visit FunctionDefinition */
    public ASTVisitor visitFunctionDefinition(GNode n, PresenceConditionManager.PresenceCondition pc) {
        if (extractFeature) {
            Collection<Node> fns =
              NodeUtilities.selectNodes(pc, n,
                "FunctionDefinition.FunctionPrototype.*.FunctionDeclarator.SimpleDeclarator.Text")
                .collect();
            fns.addAll(NodeUtilities.selectNodes(pc, n,
              "FunctionDefinition.FunctionPrototype|FunctionOldPrototype.OldFunctionDeclarator.IdentifierDeclarator.*.ParenIdentifierDeclarator.SimpleDeclarator.Text")
              .collect());
            String funcName = "";
            String src = "";
            assert fns.size() == 1;
            for (Node fn : fns) {
                funcName = fn.getTokenText();
                src = relativePath(fn.getLocation().file, this.workdir);
            }
            FeatureManager.store();
            lsymtab = new CParsingContext.SymbolTable();
            funcPc = pc;
            visit(n, pc);
            FeatureManager funcFeatures = FeatureManager.current();
            FeatureManager.load();
            if (!funcFeatures.isEmpty()) {
                CParsingContext.Entry sym = symtab.map.get(funcName);
                int argCount = -1;
                if (sym != null && sym.signature != null) {
                    argCount = sym.signature.args.length;
                }
                Feature.FunctionFeatureValue featureValue = new Feature.FunctionFeatureValue(funcName, src, argCount, funcFeatures);
                Feature feature = new Feature(Feature.FeatureType.FUNCTION, featureValue);
                addFeature(pc, feature);
                FeatureManager.funcs.put(funcName, featureValue);
            }
            // exit function scope, clear local symbol table
            lsymtab = null;
            funcPc = one;
        }
        if (collectUsage) {
            assignUsage(pc, MacroUsage.FULL_FUNC);
            visit(n, pc);
        }
        return this;
    }

    /** Visit SimpleDeclarator to retrieve local declaration of symbols */
    public ASTVisitor visitSimpleDeclarator(GNode n, PresenceConditionManager.PresenceCondition pc) {
        if (inFunction() && extractFeature) {
            String ident = NodeUtilities.expandText(n, pc, null);
            lsymtab.add(ident, false, pc.restrict(funcPc), null, null, n.getLocation());
        }
        return this;
    }

    /** Visit identifier reference to extract refered global variables */
    public ASTVisitor visitPrimaryIdentifier(GNode n, PresenceConditionManager.PresenceCondition pc) {
        if (extractFeature) {
            String ident = NodeUtilities.expandText(n, pc, null);
            if (lsymtab != null && !lsymtab.map.containsKey(ident)) {
                Feature.GVRefFeatureValue featureValue;
                // the function refers to a global variable
                CParsingContext.Entry sym = symtab.map.get(ident);
                if (sym != null && sym.getSymType().equals(CParsingContext.SymType.VARIABLE)) {
                    featureValue = new Feature.GVRefFeatureValue(ident, sym.location.file);
                    Feature feature = new Feature(Feature.FeatureType.GVREF, featureValue);
                    addFeature(pc.restrict(funcPc), feature);
                } else {
//                featureValue = new Feature.GVRefFeatureValue(ident, "");
                }
            }
        }
        return this;
    }

    /** Visit StringLiteralList and extract String Features */
    public ASTVisitor visitStringLiteralList(GNode n, PresenceConditionManager.PresenceCondition pc) {
        if (extractFeature) {
            PcMap<Node> pcMap = NodeUtilities.selectNodes(pc.restrict(funcPc), n, "*.Text");
            Set<Map.Entry<PresenceConditionManager.PresenceCondition, Collection<Node>>> entries = pcMap.entries();
            if (entries.size() == 1) {
                for (Map.Entry<PresenceConditionManager.PresenceCondition, Collection<Node>> entry : entries) {
                    StringBuilder sb = new StringBuilder();
                    entry.getValue().forEach(tn -> sb.append(Utilities.unescape_perl_string(tn.getTokenText())));
                    Feature feature = new Feature(Feature.FeatureType.STRING, sb.toString());
                    addFeature(entry.getKey(), feature);
                }
            } else if (entries.size() > 1) {
                for (Map.Entry<PresenceConditionManager.PresenceCondition, Collection<Node>> entry : entries) {
                    for (Node tn : entry.getValue()) {
                        String s = Utilities.unescape_perl_string(tn.getTokenText());
                        Feature feature = new Feature(Feature.FeatureType.STRING, s);
                        addFeature(entry.getKey(), feature);
                    }
                }
            }
        }
        if (collectUsage) {
            assignUsage(pc, MacroUsage.CONST);
        }
        return this;
    }

    /** Visit function call statement to get FUNCCALL feature */
    public ASTVisitor visitFunctionCall(GNode n, PresenceConditionManager.PresenceCondition pc) {
        if (extractFeature) {
            Collection<NodeUtilities.PcEntry<Node>> pcNodes =
              NodeUtilities.selectNodesInOrder(pc, n, "FunctionCall.PrimaryIdentifier");
            assert pcNodes.size() <= 1;
            if (pcNodes.size() == 1) {
                Node primIdent = pcNodes.iterator().next().getValue();
                String funcName = NodeUtilities.expandText(primIdent, pc, null);
                CParsingContext.Entry sym = symtab.map.get(funcName);
                Feature.FuncCallFeatureValue featureValue;
                if (sym != null) {
                    featureValue = new Feature.FuncCallFeatureValue(funcName, sym.location.file);
                } else {
                    featureValue = new Feature.FuncCallFeatureValue(funcName, "");
                }
                Feature feature = new Feature(Feature.FeatureType.FUNCCALL, featureValue);
                addFeature(pc.restrict(funcPc), feature);
            } else {
                // TODO handle indirect call (FunctionCall.IndirectSelection)
            }
            // visit children
            pcNodes = NodeUtilities.selectNodesInOrder(pc, n, "FunctionCall.ExpressionList");
            assert pcNodes.size() == 1;
            if (pcNodes.size() == 1) {
                GNode exprList = (GNode) pcNodes.iterator().next().getValue();
                visit(exprList, pc);
            }
        }
        return this;
    }

    /**
     * Visit StructOrUnionSpecifier to process struct or union definition
     * @param n
     * @param pc
     * @return
     */
    public ASTVisitor visitStructOrUnionSpecifier(GNode n, PresenceConditionManager.PresenceCondition pc) {
        if (collectUsage) {
            assignUsage(pc, MacroUsage.TYPE);
            PcMap<Node> selectRes = NodeUtilities.selectNodes(pc, n, "*.StructDeclaration");
            for (PresenceConditionManager.PresenceCondition structPc: selectRes.keySet()) {
                assignUsage(structPc, MacroUsage.TYPE);
            }
        }
        return this;
    }

    /** Skip AssemblyExpression */
    public ASTVisitor visitAssemblyExpression(GNode n, PresenceConditionManager.PresenceCondition pc) {
        return this;
    }
    /** Skip AssemblyStatement */
    public ASTVisitor visitAssemblyStatement(GNode n, PresenceConditionManager.PresenceCondition pc) {
        return this;
    }
    /** Skip AssemblyDefinition */
    public ASTVisitor visitAssemblyDefinition(GNode n, PresenceConditionManager.PresenceCondition pc) {
        return this;
    }

    public void addFeature(PresenceConditionManager.PresenceCondition pc, Feature feature) {
//        pc = configOnlyPc(pc);
        FeatureManager.current().add(pc, feature);
    }

    boolean shouldSimplify(String name) {
        if (!name.startsWith("(defined")) return true;
        name = name.replace("(defined ", "").replace(")", "");
        return !name.startsWith("CONFIG_");
    }

    private PresenceConditionManager.PresenceCondition configOnlyPc(PresenceConditionManager.PresenceCondition pc) {
        if (pcCache.containsKey(pc)) return pcCache.get(pc);
        BDD bdd = pc.getBDD();
        BDD restrictBDD = one.getBDD();
        PresenceConditionManager.Variables vars = pcm.getVariableManager();
        List allsat;
        boolean firstTerm;

        if (bdd.isOne()) {
            return pc;
        } else if (bdd.isZero()) {
            return pc;
        }

        allsat = (List) bdd.allsat();

        boolean changed = false;
        for (Object o : allsat) {
            byte[] sat;

            sat = (byte[]) o;
            for (int i = 0; i < sat.length; i++) {
                String var = vars.getName(i);
                if (var != null && shouldSimplify(var)) {
                    BDD varBDD = vars.getVariable(var);
                    if (!changed) {
                        changed = true;
                    }
                    switch (sat[i]) {
                        case 0:
                            restrictBDD = restrictBDD.and(varBDD.not());
                            break;
                        case 1:
                            restrictBDD = restrictBDD.and(varBDD);
                            break;
                    }
                }
            }
        }
        bdd = bdd.restrict(restrictBDD);
        if (!changed) return pc;
        PresenceConditionManager.PresenceCondition newPc = pcm.new PresenceCondition(bdd);
        pcCache.put(pc, newPc);
        return newPc;
    }

    private void assignUsage(PresenceConditionManager.PresenceCondition pc, MacroUsage usage) {
        List<String> macros = pc.getMacros();
        for (String macro: macros) {
            if (macroUsage.containsKey(macro)) {
                macroUsage.get(macro).add(usage);
            } else {
                macroUsage.put(macro, EnumSet.of(usage));
            }
        }
    }

    private static String relativePath(String path, String base) {
        return new File(base).toURI().relativize(new File(path).toURI()).getPath();
    }

    public enum MacroUsage {
        MODULE,
        FULL_FUNC,
        PART_FUNC,
        TYPE,
        CONST
    }

    public static final EnumSet<MacroUsage> ALL_OPTS = EnumSet.allOf(MacroUsage.class);

}
