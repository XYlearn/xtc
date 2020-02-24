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

import java.util.Collection;
import java.util.LinkedList;
import java.util.Map;
import java.util.HashMap;

import xtc.tree.Location;

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

import xtc.lang.cpp.ForkMergeParser.OrderedSyntax;
import xtc.lang.cpp.ForkMergeParser.Lookahead;

/**
 * This class implements the generated CActionsBase class.
 *
 * @author Paul Gazzillo
 * @version $Revision: 1.23 $
 */
public class CParsingContext implements ParsingContext {

  /** Output bindings and scope changes. */
  protected static boolean DEBUG = false;

  /** The symbol table for this parsing context. */
  protected SymbolTable symtab;

  /**
   * The parent parsing context, corresponding to the parent
   * scope.
   */
  protected CParsingContext parent;

  /**
   * Whether the scope this parsing context is associated with is
   * reentrant.  This is used to parse function definitions.
   */
  protected boolean reentrant;

  /** Whether to display language statistics. */
  boolean languageStatistics;

  /**
   * A three-bit digit.  This is used to capture typedef/var ambiguity
   * when one token can be both.
   */
  public static enum trit {
    TRUE,
    FALSE,
    TRUEFALSE
  }

  /** Create a new initial C parsing contex. */
  public CParsingContext() {
    this(new SymbolTable(), null);
  }
  
  /**
   * Create a new C parsing context.
   *
   * @param symtab The symbol table for this parsing context and scope.
   * @param parent The parent parsing context and scope.
   */
  public CParsingContext(SymbolTable symtab, CParsingContext parent) {
    this.symtab = symtab;
    this.parent = parent;

    this.reentrant = false;
  }

  /**
   * Turn language statistics collection on.  Default is off.
   *
   * @param b True is on.
   */
  public void collectStatistics(boolean b) {
    languageStatistics = b;
  }

  /**
   * Copy a C parsing context.  Used for forking the parsing context.
   *
   * @param scope The parsing context to copy.
   */
  public CParsingContext(CParsingContext scope) {
    this.symtab = scope.symtab.addRef();

    if (scope.parent != null) {
      this.parent = new CParsingContext(scope.parent);

    } else {
      this.parent = null;
    }

    this.reentrant = scope.reentrant;
  }
  
  public ParsingContext fork() {
    return new CParsingContext(this);
  }

  /**
   * Check whether a syntax token is an identifier.
   *
   * @return true if syntax is an identifier.
   */
  @SuppressWarnings("unchecked")
  private boolean isIdentifier(Syntax syntax) {
    return syntax.kind() == Kind.LANGUAGE
      && ((Language<CTag>)syntax).toLanguage().tag() == CTag.IDENTIFIER;
  }


  // get around capture of ? to CTag warning
  public boolean shouldReclassify(Collection<Lookahead> set) {
    // Check whether any tokens need reclassification, i.e. they are
    // an identifier and have an entry in the symbol.
    for (Lookahead n : set) {
      if (isIdentifier(n.token.syntax)) { 
        String ident = n.token.syntax.getTokenText();

        // Check the stack of symbol tables for a typedef entry.
        CParsingContext scope = this;
        while (true) {
          while (scope.reentrant) scope = scope.parent;
        
          if ( scope.symtab.map.containsKey(ident)
               && scope.symtab.map.get(ident).trueCondition != null
               ) {

            // The identifier has a typedef entry some presence
            // condition in the symbol table.  Therefore the parser
            // needs to call reclassify.

            return true;
          }
        
          if (null == scope.parent) {
            break;
          }
        
          scope = scope.parent;
        }
      }
    }

    return false;
  }

  // get around capture of ? to CTag warning
  public Collection<Lookahead> reclassify(Collection<Lookahead> set) {
    // Reclassify any tokens that are typedef names and also create a
    // new token when there is a typedef/var ambiguity so the FMLR
    // parser will fork.
    Collection<Lookahead> newTokens = null;
    for (Lookahead n : set) {
      // Get the symbol table entry for the token.
      trit isTypedef = trit.FALSE;
      if (isIdentifier(n.token.syntax)) {
        isTypedef = isType(n.token.syntax.getTokenText(),
                           n.presenceCondition, n.token.syntax.getLocation());
      }

      switch (isTypedef) {
      case TRUEFALSE:
        // A typedef ambiguity.  Find the presence condition for both
        // the variable entry and for the typedef entry.  Reclassify
        // the current token as a typedef name and update its presence
        // condition.  Then add a new token for the variable entry.
        PresenceCondition typedefPresenceCondition
          = this.typedefPresenceCondition(n.token.syntax.getTokenText(), n.presenceCondition);
        n.presenceCondition.delRef();
        n.presenceCondition = typedefPresenceCondition;

        // Add a new token for the variable entry.
        PresenceCondition varPresenceCondition = typedefPresenceCondition.not();
        Lookahead identifier = new Lookahead(n.token, varPresenceCondition); 
        if (null == newTokens) {
          newTokens = new LinkedList<Lookahead>();
        }
        newTokens.add(identifier);

        // Fall through to reclassify the token as a TYPEDEFname.

      case TRUE:
        // A typedef name.  Reclassify the token replacing the
        // IDENTIFIER token with a TYPEDEFname token.
        Language<CTag> newToken = new Text<CTag>(CTag.TYPEDEFname,
                                                 n.token.syntax.getTokenText());

        // Copy the location.
        newToken.setLocation(n.token.syntax.getLocation());

        // Copy the ordering wrapper for the token.
        n.token = n.token.copy(newToken);
        break;

      case FALSE:
        // No reclassification necessary.
        break;
      }
    }

    return newTokens;
  }

  /**
   * This method determines whether an identifier is a typedef name,
   * var name, or both by inspecting the symbol table in this scope
   * and any parent scopes.
   *
   * @param ident The identifier.
   * @param presenceCondition The presence condition.
   */
  public trit isType(String ident, PresenceCondition presenceCondition,
                     Location location) {
    CParsingContext scope;
    
    scope = this;
      
    while (true) {
      while (scope.reentrant) scope = scope.parent;
        
      if ( scope.symtab.map.containsKey(ident)
           && scope.symtab.map.get(ident).trueCondition != null
           ) {
        break;
      }
        
      if (null == scope.parent) {
        return trit.FALSE;
      }
        
      scope = scope.parent;
    }
    
    scope = this;
    
    do {  //find the symbol in local scope or parent scope
      
      while (scope.reentrant) scope = scope.parent;
      
      if (scope.symtab.map.containsKey(ident)) {
        Entry e = scope.symtab.map.get(ident);

        // Set the flags for typedef (2) and var (1).
        int flags = 0;
        if (null != e.trueCondition) {
          PresenceCondition and;

          and = e.trueCondition.and(presenceCondition);
          if (! and.isFalse()) {
            flags |= 2;
          }
          and.delRef();
        }
        
        if (null != e.falseCondition) {
          PresenceCondition and;

          and = e.falseCondition.and(presenceCondition);
          if (! and.isFalse()) {
            flags |= 1;
          }
          and.delRef();
        }

        switch (flags) {
        case 3:
          if (DEBUG) System.err.println("isType: " + ident
                                        + " true/false in " /*+ presenceCondition*/);
          if (languageStatistics) {
            System.err.println(String.format("typedef_ambiguity %s %s",
                                             ident, location));
          }
          return trit.TRUEFALSE;

        case 2:
          if (DEBUG) System.err.println("isType: " + ident
                                        + " true in " /*+ presenceCondition*/);
          return trit.TRUE;

        case 1:
          if (DEBUG) System.err.println("isType: " + ident
                                        + " false in " /*+ presenceCondition*/);
          return trit.FALSE;
        }
      }
      
      if (null == scope.parent) {
        break;
      }
      
      scope = scope.parent;
    } while (true);
    
    if (DEBUG) System.err.println("isType: " + ident
                                  + " false in " /*+ presenceCondition*/);
    
    return trit.FALSE;
  }
  
  public boolean mayMerge(ParsingContext other) {
    if (! (other instanceof CParsingContext)) return false;

    return mergeable(this, (CParsingContext) other);
  }

  /**
   * A helper method for testing mergeability.
   *
   * @param s The first parsing context.
   * @param t The second parsing context.
   */
  private static boolean mergeable(CParsingContext s, CParsingContext t) {
    if ((null == s) && (null == t)) {
      return true;
    } else if ((null == s) || (null == t)) {
      return false;
    } else if (s.symtab == t.symtab) {
      return true;
    } else if (s.reentrant != t.reentrant) {
      return false;
    } else {
      return mergeable(s.parent, t.parent);
    }
  }
  
  public ParsingContext merge(ParsingContext other) {
    CParsingContext scope = (CParsingContext) other;

    if (this.symtab == scope.symtab) {
      return this;
    } else {
      symtab.addAll(scope.symtab);

      if (null != parent) {
        return parent.merge(scope.parent);

      } else {
        return null;
      }
    }
  }

  /** Free BDDs in the symbol table and those of the parent scopes. */
  public void free() {
    symtab.delRef();

    if (null != parent) {
      parent.free();
    }
  }

  /**
   * Bind an identifier to a typedef or var name for a given presence
   * condition.
   *
   * @param ident The identifier.
   * @param typedef Whether its a typedef name or a var name.
   * @param presenceCondition The presence condition.
   * @param symType The symbol type.
   * @param signature Function Signature if the symbol is a function.
   */
  public void bind(String ident, boolean typedef, PresenceCondition presenceCondition, SymType symType, Signature signature) {
    CParsingContext scope;

    if (DEBUG) {
      System.err.println("bind: " + ident + " " + typedef);
    }

    scope = this;
    while (scope.reentrant) scope = scope.parent;

    scope.symtab.add(ident, typedef, presenceCondition, symType, signature);
  }

  /**
   * Bind an identifier to a typedef or var name for a given presence
   * condition.
   *
   * @param ident The identifier.
   * @param typedef Whether its a typedef name or a var name.
   * @param presenceCondition The presence condition.
   * @param symType The symbol type.
   */
  public void bind(String ident, boolean typedef, PresenceCondition presenceCondition, SymType symType) {
    bind(ident, typedef, presenceCondition, symType, null);
  }

  /**
   * Bind an identifier to a typedef or var name for a given presence
   * condition.
   *
   * @param ident The identifier.
   * @param typedef Whether its a typedef name or a var name.
   * @param presenceCondition The presence condition.
   */
  public void bind(String ident, boolean typedef, PresenceCondition presenceCondition) {
    bind(ident, typedef, presenceCondition, SymType.UNKNOWN, null);
  }

  /**
   * Return the presence condition under which an identifier is a
   * typedef name.
   *
   * @param ident The identifier.
   * @param presenceCondition The current presence condition.
   */
  public PresenceCondition typedefPresenceCondition(String ident, PresenceCondition presenceCondition) {
    CParsingContext scope;
    
    scope = this;
    
    do {  //find the symbol in local scope or parent scope

      while (scope.reentrant) scope = scope.parent;

      if (scope.symtab.map.containsKey(ident)) {
        Entry e;
        boolean typedef;
        boolean var;
        PresenceCondition and;
        
        e = scope.symtab.map.get(ident);

        and = e.trueCondition.and(presenceCondition);
        
        if (! and.isFalse()) {
          return and;
        }
        and.delRef();
      }
      
      if (null == scope.parent) {
        break;
      }
      scope = scope.parent;
    } while (true);
    
    return null;
  }

  /**
   * Enter a new scope.
   *
   * @param presenceCondition The current presence condition.
   * @return The parsing context of the new scope.
   */
  public CParsingContext enterScope(PresenceCondition presenceCondition) {
    CParsingContext scope;
    
    if (DEBUG) System.err.println("enter scope");

    scope = this;
    while (scope.reentrant) {
      scope.symtab.delRef();
      scope.symtab = null;
      scope = scope.parent;
    }
    
    scope = new CParsingContext(new SymbolTable(), new CParsingContext(scope));
    
    return scope;
  }
  
  /**
   * Exit the scope.
   *
   * @param presenceCondition The current presence condition.
   * @return The parsing context of the parent scope.
   */
  public CParsingContext exitScope(PresenceCondition presenceCondition) {
    CParsingContext scope;
    
    if (DEBUG) System.err.println("exit scope");

    scope = this;
    while (scope.reentrant) {
      scope.symtab.delRef();
      scope.symtab = null;
      scope = scope.parent;
    }
    
    scope.symtab.delRef();
    scope.symtab = null;
    scope = scope.parent;

    return scope;
  }
  
  /**
   * Exit a reentrant scope.
   *
   * @param presenceCondition The current presence condition.
   * @return The parsing context of the parent scope.
   */
  public CParsingContext exitReentrantScope(PresenceCondition presenceCondition) {
    CParsingContext scope;
    
    if (DEBUG) System.err.println("exit reentrant scope");
    
    scope = this;
    while (scope.reentrant) {
      scope.symtab.delRef();
      scope.symtab = null;
      scope = scope.parent;
    }

    scope.reentrant = true;

    return scope;
  }
  
  /**
   * Reenter a reentrant scope.
   *
   * @param presenceCondition The current presence condition.
   * @return The parsing context of the reentered scope.
   */
  public CParsingContext reenterScope(PresenceCondition presenceCondition) {
    if (DEBUG) System.err.println("reenter scope");
    
    if (! reentrant) {
      // This may happen for functions without a postfix declarator.
      // See cpp_testsuite/grammar/scope.c.  The parameter list
      // nonterminal enters and exits a reentrant scope.  Then the
      // function nonterminal reenters the scope.  If there is no
      // list, there is no reentrant scope, and at the end of the
      // function nonterminal, exitScope is called, returning null.
      if (DEBUG) System.err.println("not reentrant");
      return enterScope(presenceCondition);
    } else {
      reentrant = false;
      return this;
    }
  }
  
  /**
   * Kill a reentrant scope.
   *
   * @param presenceCondition The current presence condition.
   * @return The parsing context of the non-reentrant parent scope.
   */
  public CParsingContext killReentrantScope(PresenceCondition presenceCondition) {
    CParsingContext scope;
    
    if (DEBUG) System.err.println("kill reentrant scope");
    
    scope = this;
    while (scope.reentrant) {
      scope.symtab.delRef();
      scope.symtab = null;
      scope = scope.parent;
    }

    return scope;
  }
  
  /** The symbol table that stores a scope's symbol bindings. */
  public static class SymbolTable {

    /** The symbol table data structure. */
    public HashMap<String, Entry> map;
    
    /** The reference count for cleaning up the table BDDs */
    public int refs;
    
    /** New table */
    public SymbolTable() {
      this.map = new HashMap<String, Entry>();
      this.refs = 1;
    }
    
    public SymbolTable addRef() {
      refs++;
      
      return this;
    }
  
    public void delRef() {
      refs--;
      if (0 == refs) {  //clean up symbol table
        for (String str : this.map.keySet()) {
          Entry e = this.map.get(str);
  
          if (null != e.trueCondition) {
            e.trueCondition.delRef();
          }
          if (null != e.falseCondition) {
            e.falseCondition.delRef();
          }
        }
      }
    }

    public void add(String ident, boolean typedef, PresenceCondition presenceCondition) {
      add(ident, typedef, presenceCondition, SymType.UNKNOWN, null);
    }

    public void add(String ident, boolean typedef, PresenceCondition presenceCondition, SymType symType) {
      add(ident, typedef, presenceCondition, symType, null);
    }
    
    public void add(String ident, boolean typedef, PresenceCondition presenceCondition, SymType symType, Signature signature) {
      if (! map.containsKey(ident)) {
        map.put(ident,
                new Entry(typedef ? presenceCondition : null, typedef ? null : presenceCondition, symType, signature));
        presenceCondition.addRef();
      }
      else {
        Entry e;
        
        e = map.get(ident);
        
        if (typedef) {
          if (null == e.trueCondition) {
            e.trueCondition = presenceCondition;
            presenceCondition.addRef();
          }
          else {
            PresenceCondition or;
            
            or = e.trueCondition.or(presenceCondition);
            e.trueCondition.delRef();
            e.trueCondition = or;
          }
        }
        else {
          if (null == e.falseCondition) {
            e.falseCondition = presenceCondition;
            presenceCondition.addRef();
          }
          else {
            PresenceCondition or;
            
            or = e.falseCondition.or(presenceCondition);
            e.falseCondition.delRef();
            e.falseCondition = or;
          }
        }
      }
    }

    public void addAll(SymbolTable symtab) {
      for (String str : symtab.map.keySet()) {
        if (! map.containsKey(str)) {
          Entry e = symtab.map.get(str);
          
          map.put(str, e.clone());
          
          if (null != e.trueCondition) {
            e.trueCondition.addRef();
          }
          
          if (null != e.falseCondition) {
            e.falseCondition.addRef();
          }
        }
        else {
          Entry d = map.get(str);
          Entry e = symtab.map.get(str);
          
          if (null != e.trueCondition) {
            if (null == d.trueCondition) {
              d.trueCondition = e.trueCondition;
              e.trueCondition.addRef();
            }
            else {
              PresenceCondition or;
              
              or = d.trueCondition.or(e.trueCondition);
              d.trueCondition.delRef();
              d.trueCondition = or;
            }
          }
          
          if (null != e.falseCondition) {
            if (null == d.falseCondition) {
              d.falseCondition = e.falseCondition;
              e.falseCondition.addRef();
            }
            else {
              PresenceCondition or;
              
              or = d.falseCondition.or(e.falseCondition);
              d.falseCondition.delRef();
              d.falseCondition = or;
            }
          }
        }
      }
    }
  }

  /** An entry in the symbol table. */
  public static class Entry {
    /** The presence condition when the symbol is a typedef name. */
    PresenceCondition trueCondition;

    /** The presence condition when the symbol is a var name. */
    PresenceCondition falseCondition;

    SymType symType;

    Signature signature;
    
    /** Create a new entry.
     *
     * @param t The typedef name presence condition.
     * @param f The var name presence condition.
     */
    public Entry(PresenceCondition trueCondition, PresenceCondition falseCondition) {
      this(trueCondition, falseCondition, SymType.UNKNOWN, null);
    }

    public Entry(PresenceCondition trueCondition, PresenceCondition falseCondition, SymType symType) {
      this(trueCondition, falseCondition, symType, null);
    }

    public Entry(PresenceCondition trueCondition, PresenceCondition falseCondition, SymType symType, Signature signature) {
      this.trueCondition = trueCondition;
      this.falseCondition = falseCondition;
      this.symType = symType;
      this.signature = signature;
    }

    protected Entry clone() {
      Entry e = new Entry(trueCondition, falseCondition, symType, signature);
      return e;
    }

    public Signature getSignature() {
      return signature;
    }

    public SymType getSymType() {
      return symType;
    }
  }

  public static class Signature {
    String[] args;

    public Signature(String[] args) {
      this.args = args;
    }
  }

  public static enum SymType {
      FUNCTION, VARIABLE, TYPENAME, ENUM, UNKNOWN
  }
}

