/*
 * xtc - The eXTensible Compiler
 * Copyright (C) 2009-2012 New York University
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,
 * USA.
 */
package xtc.lang.cpp;

import xtc.tree.GNode;
import xtc.tree.Node;
import xtc.tree.Location;
import xtc.util.Pair;
import xtc.util.NodeUtilities;

import xtc.lang.cpp.Syntax.Kind;
import xtc.lang.cpp.Syntax.LanguageTag;
import xtc.lang.cpp.Syntax.ConditionalTag;
import xtc.lang.cpp.Syntax.DirectiveTag;
import xtc.lang.cpp.Syntax.Layout;
import xtc.lang.cpp.Syntax.Language;
import xtc.lang.cpp.Syntax.Text;
import xtc.lang.cpp.Syntax.Directive;
import xtc.lang.cpp.Syntax.Conditional;

import xtc.lang.cpp.PresenceConditionManager.PresenceCondition;

import xtc.lang.cpp.ForkMergeParser.StackFrame;
import xtc.lang.cpp.ForkMergeParser.Subparser;

import java.util.ArrayList;
import java.util.Collection;
import java.util.List;

/**
 * This class implements the generated CActionsInterface.
 *
 * @author Paul Gazzillo
 * @version $Revision: 1.5 $
 */
public class CSemanticActions extends CActionsInterface {
  /** True when statistics should be output. */
  private boolean languageStatistics;

  /** Construct a new C semantic actions plugin. */
  private CSemanticActions() {
  }

  /** The instance of this class */
  private static CSemanticActions ref;

  /** Get the instance of this class */
  public static CSemanticActions getInstance() {
    if (null == ref) {
      ref = new CSemanticActions();
    }
    return ref;
  }

  /**
   * Turn language statistics collection on.  Default is off.
   *
   * @param b True is on.
   */
  public void collectStatistics(boolean b) {
    languageStatistics = b;
  }

  public void BindIdentifier(Subparser subparser) {
    StackFrame stack = subparser.stack;
    PresenceConditionManager.PresenceCondition presenceCondition = subparser.getPresenceCondition();
    CParsingContext scope = (CParsingContext) subparser.scope;
    boolean typedef;
    Language ident;
    CParsingContext.SymType symType = CParsingContext.SymType.UNKNOWN;
    CParsingContext.Signature signature = null;
      
    // Get the AST nodes that contain the type specifier and the
    // declarator.
    Object a = stack.get(3).value;
    Object b = stack.get(2).value;

    // Check whether the declaration is a typedef.  This assumes that
    // the typedef keyword is the first token of the declaration.
    Language t;
    while (true) {
      if (a instanceof Node && ! (a instanceof Syntax)) {
        Node n = (Node) a;
        if (n.hasName(ForkMergeParser.CHOICE_NODE_NAME)) {
          // When it's a conditional node, the first child is a
          // presence condition, the second is the first AST child.
          a = n.get(1);
        } else {
          a = n.get(0);
        }
      } else if (a instanceof Pair) {
        a = ((Pair) a).head();
      } else {
        break;
      }
    }
    t = (Language) a;

    // Get the identifier in the declarator.
    ident = getident(b);

    if (CTag.TYPEDEF == t.tag()) {
      // Bind a typedef name.
      typedef = true;

      if (languageStatistics) {
        if (typedef) {
          Location location = subparser.lookahead.token.syntax.getLocation();
          System.err.println(String.format("typedef %s %s", ident, location));
        }
      }
    } else {
      // Binding a variable name.
      typedef = false;
    }

    // Aquire symbol type and signature.
    if (b instanceof Node && ((Node) b).getName().equals("FunctionDeclarator")) {
      // save symtab for function
      symType = CParsingContext.SymType.FUNCTION;
      signature = getSignature(subparser);
    } else if (typedef){
      // the typedef statement create a type symbol
      symType = CParsingContext.SymType.TYPENAME;
    } else {
      // Not sure but in this case it creates a variable symbol
      symType = CParsingContext.SymType.VARIABLE;
    }

    scope.bind(ident.getTokenText(), typedef, presenceCondition, symType, signature, ident.getLocation());
  }
    
  public void BindIdentifierInList(Subparser subparser) {
    StackFrame stack = subparser.stack;
    PresenceConditionManager.PresenceCondition presenceCondition = subparser.getPresenceCondition();
    CParsingContext scope = (CParsingContext) subparser.scope;

    boolean typedef;
    Language ident;
      
    // Get the AST nodes that contain the type specifier and the
    // declarator.
    Object a = stack.get(5).value;
    Object b = stack.get(2).value;

    // Check whether the declaration is a typedef.  This assumes that
    // the typedef keyword is the first token of the declaration.
    Language t;
    while (true) {
      if (a instanceof Node && ! (a instanceof Syntax)) {
        Node n = (Node) a;
        if (n.hasName(ForkMergeParser.CHOICE_NODE_NAME)) {
          // When it's a conditional node, the first child is a
          // presence condition, the second is the first AST child.
          a = n.get(1);
        } else {
          a = n.get(0);
        }
      } else if (a instanceof Pair) {
        a = ((Pair) a).head();
      } else {
        break;
      }
    }
    t = (Language) a;

    // Get the identifier in the declarator.
    ident = getident(b);

    if (CTag.TYPEDEF == t.tag()) {
      // Bind a typedef name.
      typedef = true;

      if (languageStatistics) {
        if (typedef) {
          Location location = subparser.lookahead.token.syntax.getLocation();
          System.err.println(String.format("typedef %s %s", ident, location));
        }
      }
    } else {
      // Bind a variable name.
      typedef = false;
    }

    scope.bind(ident.getTokenText(), typedef, presenceCondition, CParsingContext.SymType.VARIABLE, null, ident.getLocation());
  }
    
  public void BindVar(Subparser subparser) {
    StackFrame stack = subparser.stack;
    PresenceConditionManager.PresenceCondition presenceCondition = subparser.getPresenceCondition();
    CParsingContext scope = (CParsingContext) subparser.scope;
      
    // Get the identifier in the declarator.
    Object b = stack.get(2).value;
    Language<?> ident = getident(b);

    // Bind variable name.
    scope.bind(ident.getTokenText(), false, presenceCondition, CParsingContext.SymType.VARIABLE, null, ident.getLocation());
  }
    
  public void BindEnum(Subparser subparser) {
    StackFrame stack  = subparser.stack;
    PresenceConditionManager.PresenceCondition presenceCondition = subparser.getPresenceCondition();
    CParsingContext scope = (CParsingContext) subparser.scope;
      
    // Get the identifier in the declarator.  The identifier must
    // occur after an IdentifierOrTypedefName token.
    Object b = stack.get(2).value;
    Language<?> ident = getident(b);

    // Bind variable name.
    scope.bind(ident.getTokenText(), false, presenceCondition, CParsingContext.SymType.ENUM, null, ident.getLocation());
  }
    
  public void EnterScope(Subparser subparser) {
    PresenceConditionManager.PresenceCondition presenceCondition = subparser.getPresenceCondition();
      
    subparser.scope = ((CParsingContext) subparser.scope).enterScope(presenceCondition);
  }
    
  public void ExitScope(Subparser subparser) {
    PresenceConditionManager.PresenceCondition presenceCondition = subparser.getPresenceCondition();
      
    subparser.scope = ((CParsingContext) subparser.scope).exitScope(presenceCondition);
  }

  public void ExitReentrantScope(Subparser subparser) {
    PresenceConditionManager.PresenceCondition presenceCondition = subparser.getPresenceCondition();
      
    subparser.scope
      = ((CParsingContext) subparser.scope).exitReentrantScope(presenceCondition);
  }
    
  public void ReenterScope(Subparser subparser) {
    PresenceConditionManager.PresenceCondition presenceCondition = subparser.getPresenceCondition();
      
    subparser.scope
      = ((CParsingContext) subparser.scope).reenterScope(presenceCondition);
  }
    
  public void KillReentrantScope(Subparser subparser) {
    PresenceConditionManager.PresenceCondition presenceCondition = subparser.getPresenceCondition();
      
    subparser.scope
      = ((CParsingContext) subparser.scope).killReentrantScope(presenceCondition);
  }

  /**
   * Get Signature from Declaration Node. Assume this function is called
   * in BindIdentifier, and the declarator is FunctionDeclarator.
   *
   * @param subparser The subparser passed to Function Declarator.
   * @return if the node
   */
  private static CParsingContext.Signature getSignature(Subparser subparser) {
    StackFrame stack = subparser.stack;
    // Get the AST nodes that contain the type specifier and the
    // declarator.
    // specifier.
    Object a = stack.get(3).value;
    // declarator
    Object b = stack.get(2).value;

    // Get the specifier text
//    String specifierText = NodeUtilities.expandText(a, subparser.getPresenceCondition());
    // get parameter types.
    Collection<NodeUtilities.PcEntry<Node>> pcNodes =
      NodeUtilities.selectNodesInOrder(subparser.getPresenceCondition(), (Node)b,
        "FunctionDeclarator.ParameterTypeListOpt.*.ParameterDeclaration");
    List<String> argList = new ArrayList<>();
    PresenceCondition pc = subparser.getPresenceCondition();
    for (NodeUtilities.PcEntry<Node> pcEntry : pcNodes) {
      String arg = NodeUtilities.expandText(pcEntry.getValue(), pc, n -> n.hasName("SimpleDeclarator"));
      if (arg.equals("void")) continue;
      if(!pcEntry.getPc().restrict(pc).isTrue()) {
        argList.add("?" + arg);
      } else {
        argList.add(arg);
      }
    }
    String[] args = new String[argList.size()];
    return new CParsingContext.Signature(argList.toArray(args));
  }
    
  /**
   * Find the identifier or typedef name in a declarator.  Assume
   * the first identifier in the subtree is the var or typedef name.
   *
   * @param o The semantic value.
   * @return The first identifier in the subtree or null if there is
   * none.
   */
  private static Language getident(Object o) {
    if (o instanceof Language) {
      Language token = ((Language) o);
        
      if (CTag.IDENTIFIER == token.tag()
          || CTag.TYPEDEFname == token.tag()) {
        return token;

      } else {
        return null;
      }

    } else if (o instanceof Pair) {
      Pair<?> b = (Pair<?>) o;
        
      while (b != Pair.empty()) {
        Object child = b.head();
          
        if (null != child) {
          Language ident = getident(child);
            
          if (null != ident) {
            return ident;
          }
        }
          
        b = b.tail();
      }
        
      return null;
    } else if (o instanceof PresenceConditionManager.PresenceCondition) {
      return null;
    } else {
      Node b = (Node) o;
        
      for (int i = 0; i < b.size(); i++) {
        Object child = b.get(i);
          
        if (null != child) {
          Language ident = getident(child);
            
          if (null != ident) {
            return ident;
          }
        }
      }
        
      return null;
    }
  }
}