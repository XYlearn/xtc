package xtc.lang.cpp;

import javafx.util.Pair;
import xtc.tree.GNode;
import xtc.tree.Node;
import xtc.tree.Visitor;
import xtc.util.NodeUtilities;
import xtc.util.Utilities;

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

    private PresenceConditionManager.PresenceCondition one;

    /**
     * ASTVisitor Constructor.
     * @param pcm
     */
    public ASTVisitor(PresenceConditionManager pcm, CParsingContext.SymbolTable symtab) {
        this.pcm = pcm;
        this.symtab = symtab;
        one = pcm.new PresenceCondition(true);
        cache     =
            new LinkedHashMap<CacheKey, Method>(CACHE_CAPACITY, CACHE_LOAD, true) {
                protected boolean removeEldestEntry(Map.Entry e) {
                    return size() > CACHE_SIZE;
                }
            };
        key       = new CacheKey(null, null);
        arguments = new Object[]   { null, null };
        argTypes  = new Class<?>[] { GNode.class, PresenceConditionManager.PresenceCondition.class };
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
        return this;
    }

    /** Visit Text and extract Number Features */
    public ASTVisitor visit(Syntax.Text n, PresenceConditionManager.PresenceCondition pc) {
        Enum<CTag> tag = ((Syntax.Text) n).tag();
        String s = Utilities.unescape_perl_string(n.getTokenText());
        Number num = null;
        try {
            if (tag.equals(CTag.CHARACTERconstant)) {
                num = (int)s.charAt(1);
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
        } catch (NumberFormatException e) {}
        if (null != num && !num.equals(0)) {
            Feature feature = new Feature(Feature.FeatureType.NUMBER, num);
            FeatureManager.current().add(pc, feature);
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
            // Dont need to and childPc with pc
            dispatch(child, childPc);
        }
        return this;
    }

    /** Visit FunctionDefinition */
    public ASTVisitor visitFunctionDefinition(GNode n, PresenceConditionManager.PresenceCondition pc) {
        Collection<Node> fns =
            NodeUtilities.selectNodes(pc, n,
                "FunctionDefinition.FunctionPrototype.*.FunctionDeclarator.SimpleDeclarator.Text")
            .collect();
        fns.addAll(NodeUtilities.selectNodes(pc, n,
            "FunctionDefinition.*.OldFunctionDeclarator.IdentifierDeclarator.*.ParenIdentifierDeclarator.SimpleDeclarator.Text")
            .collect());
        String funcName = "";
        assert fns.size() == 1;
        for (Node fn: fns) {
            funcName= fn.getTokenText();
        }
        FeatureManager.store();
        lsymtab = new CParsingContext.SymbolTable();
        visit(n, pc);
        FeatureManager funcFeatures = FeatureManager.current();
        FeatureManager.load();
        if (!funcFeatures.isEmpty()) {
            CParsingContext.Entry sym = symtab.map.get(funcName);
            int argCount = sym.signature.args.length;
            Object featureValue = new Feature.FunctionFeatureValue(funcName, argCount, funcFeatures);
            Feature feature = new Feature(Feature.FeatureType.FUNCTION, featureValue);
            FeatureManager.current().add(pc, feature);
        }
        // exit function scope, clear local symbol table
        lsymtab = null;
        return this;
    }

    /** Visit SimpleDeclarator to retrieve local declaration of symbols */
    public ASTVisitor visitSimpleDeclarator(GNode n, PresenceConditionManager.PresenceCondition pc) {
        if (lsymtab != null) {
            lsymtab.add(NodeUtilities.expandText(n, pc, null), false, pc);
        }
        return this;
    }

    /** Visit identifier reference to extract refered global variables */
    public ASTVisitor visitPrimaryIdentifier(GNode n, PresenceConditionManager.PresenceCondition pc) {
        String ident = NodeUtilities.expandText(n, pc, null);
        if (lsymtab != null && !lsymtab.map.containsKey(ident) && symtab.map.containsKey(ident) &&
          symtab.map.get(ident).getSymType().equals(CParsingContext.SymType.VARIABLE)) {
            // the function refers to a global variable
            Feature feature = new Feature(Feature.FeatureType.GVREF, ident);
            FeatureManager.current().add(pc, feature);
        }
        return this;
    }

    /** Visit StringLiteralList and extract String Features */
    public ASTVisitor visitStringLiteralList(GNode n, PresenceConditionManager.PresenceCondition pc) {
        PcMap<Node> pcMap = NodeUtilities.selectNodes(pc, n, "*.Text");
        Set<Map.Entry<PresenceConditionManager.PresenceCondition, Collection<Node>>> entries = pcMap.entries();
        if (entries.size() == 1) {
            for (Map.Entry<PresenceConditionManager.PresenceCondition, Collection<Node>> entry: entries) {
                StringBuilder sb = new StringBuilder();
                entry.getValue().forEach(tn -> sb.append(Utilities.unescape(tn.getTokenText())));
                Feature feature = new Feature(Feature.FeatureType.STRING,sb.toString());
                FeatureManager.current().add(entry.getKey(), feature);
            }
        } else if (entries.size() > 1) {
            for (Map.Entry<PresenceConditionManager.PresenceCondition, Collection<Node>> entry: entries) {
                for (Node tn : entry.getValue()) {
                    String s = Utilities.unescape(tn.getTokenText());
                    Feature feature = new Feature(Feature.FeatureType.STRING, s);
                    FeatureManager.current().add(entry.getKey(), feature);
                }
            }
        }
        return this;
    }

    /** Visit function call statement to get FUNCCALL feature */
    public ASTVisitor visitFunctionCall(GNode n, PresenceConditionManager.PresenceCondition pc) {
        Collection<Pair<PresenceConditionManager.PresenceCondition, Node>> pcNodes =
          NodeUtilities.selectNodesInOrder(pc, n, "FunctionCall.PrimaryIdentifier");
        assert pcNodes.size() <= 1;
        if (pcNodes.size() == 1) {
            String funcName = NodeUtilities.expandText(pcNodes.iterator().next().getValue(), pc, null);
            Feature feature = new Feature(Feature.FeatureType.FUNCCALL, funcName);
            FeatureManager.current().add(pc, feature);
        }
        // visit children
        visit(n, pc);
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

}
