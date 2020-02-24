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

import xtc.lang.cpp.ForkMergeParser.Subparser;
import xtc.tree.GNode;
import xtc.util.Pair;
/**
 * This class is generated from grammar annotations and provides semantic
 * value and action support.
 */
public class CSemanticValues implements SemanticValues {
  private static CSemanticValues ref;

  public static CSemanticValues getInstance() {
    if (ref == null)
        ref = new CSemanticValues();
    return ref;
  }

  public Object getValue(int id, String name, Pair<Object> values) {
    Object value;

    if (values == Pair.<Object>empty()) {
      value = null;

    } else {
      value = GNode.createFromPair(name, values.head(), values.tail());
    }

    return value;
  }
  public ValueType getValueType(int id) {
    if (0 <= id && id < 7) {
      return ValueType.NODE;
    }
    switch (id - 7) {
      case 124: // ExternalDeclarationList (131)
        // Fall through
      case 141: // DeclarationQualifierList (148)
        // Fall through
      case 142: // TypeQualifierList (149)
        // Fall through
      case 169: // StructDeclarationList (176)
        // Fall through
      case 171: // StructDefaultDeclaringList (178)
        // Fall through
      case 172: // StructDeclaringList (179)
        // Fall through
      case 178: // EnumeratorList (185)
        // Fall through
      case 182: // ParameterList (189)
        // Fall through
      case 184: // IdentifierList (191)
        // Fall through
      case 192: // MatchedInitializerList (199)
        // Fall through
      case 194: // DesignatorList (201)
        // Fall through
      case 229: // LocalLabelDeclarationList (236)
        // Fall through
      case 231: // LocalLabelList (238)
        // Fall through
      case 232: // DeclarationOrStatementList (239)
        // Fall through
      case 234: // DeclarationList (241)
        // Fall through
      case 244: // StringLiteralList (251)
        // Fall through
      case 257: // ExpressionList (264)
        // Fall through
      case 284: // AttributeSpecifierList (291)
        // Fall through
      case 288: // AttributeList (295)
        // Fall through
      case 297: // Assemblyoperands (304)
        return ValueType.LIST;

      case 0: // BREAK (7)
        // Fall through
      case 10: // RETURN (17)
        // Fall through
      case 16: // CONTINUE (23)
        // Fall through
      case 21: // GOTO (28)
        // Fall through
      case 58: // LPAREN (65)
        // Fall through
      case 59: // RPAREN (66)
        // Fall through
      case 60: // COMMA (67)
        // Fall through
      case 63: // LBRACE (70)
        // Fall through
      case 64: // RBRACE (71)
        // Fall through
      case 65: // LBRACK (72)
        // Fall through
      case 66: // RBRACK (73)
        // Fall through
      case 67: // DOT (74)
        // Fall through
      case 80: // QUESTION (87)
        // Fall through
      case 81: // COLON (88)
        // Fall through
      case 82: // SEMICOLON (89)
        // Fall through
      case 83: // ASSIGN (90)
        return ValueType.LAYOUT;

      case 304: // BindIdentifier (311)
        // Fall through
      case 305: // BindIdentifierInList (312)
        // Fall through
      case 306: // BindVar (313)
        // Fall through
      case 307: // BindEnum (314)
        // Fall through
      case 308: // EnterScope (315)
        // Fall through
      case 309: // ExitScope (316)
        // Fall through
      case 310: // ExitReentrantScope (317)
        // Fall through
      case 311: // ReenterScope (318)
        // Fall through
      case 312: // KillReentrantScope (319)
        return ValueType.ACTION;

      case 123: // TranslationUnit (130)
        // Fall through
      case 125: // ExternalDeclaration (132)
        // Fall through
      case 127: // FunctionDefinitionExtension (134)
        // Fall through
      case 135: // DeclarationExtension (142)
        // Fall through
      case 139: // DeclarationSpecifier (146)
        // Fall through
      case 140: // TypeSpecifier (147)
        // Fall through
      case 150: // BasicTypeSpecifier (157)
        // Fall through
      case 162: // StorageClass (169)
        // Fall through
      case 163: // BasicTypeName (170)
        // Fall through
      case 166: // ElaboratedTypeName (173)
        // Fall through
      case 189: // DesignatedInitializer (196)
        // Fall through
      case 198: // Declarator (205)
        // Fall through
      case 199: // TypedefDeclarator (206)
        // Fall through
      case 200: // TypedefDeclaratorMain (207)
        // Fall through
      case 204: // ParenTypedefDeclarator (211)
        // Fall through
      case 207: // IdentifierDeclarator (214)
        // Fall through
      case 208: // IdentifierDeclaratorMain (215)
        // Fall through
      case 209: // UnaryIdentifierDeclarator (216)
        // Fall through
      case 210: // PostfixIdentifierDeclarator (217)
        // Fall through
      case 213: // PostfixingFunctionDeclarator (220)
        // Fall through
      case 215: // ParenIdentifierDeclarator (222)
        // Fall through
      case 220: // PostfixingAbstractDeclarator (227)
        // Fall through
      case 225: // Statement (232)
        // Fall through
      case 233: // DeclarationOrStatement (240)
        // Fall through
      case 238: // JumpStatement (245)
        // Fall through
      case 243: // Constant (250)
        // Fall through
      case 245: // PrimaryExpression (252)
        // Fall through
      case 249: // PostfixExpression (256)
        // Fall through
      case 258: // UnaryExpression (265)
        // Fall through
      case 266: // CastExpression (273)
        // Fall through
      case 267: // MultiplicativeExpression (274)
        // Fall through
      case 268: // AdditiveExpression (275)
        // Fall through
      case 269: // ShiftExpression (276)
        // Fall through
      case 270: // RelationalExpression (277)
        // Fall through
      case 271: // EqualityExpression (278)
        // Fall through
      case 272: // AndExpression (279)
        // Fall through
      case 273: // ExclusiveOrExpression (280)
        // Fall through
      case 274: // InclusiveOrExpression (281)
        // Fall through
      case 275: // LogicalAndExpression (282)
        // Fall through
      case 276: // LogicalORExpression (283)
        // Fall through
      case 277: // ConditionalExpression (284)
        // Fall through
      case 278: // AssignmentExpression (285)
        // Fall through
      case 280: // ExpressionOpt (287)
        // Fall through
      case 281: // Expression (288)
        // Fall through
      case 282: // ConstantExpression (289)
        return ValueType.PASS_THROUGH;

      default:
        return ValueType.NODE;
    }
  }
  public boolean isComplete(int id) {
    switch(id) {
    case 256: // PostfixExpression
      // Fall through
    case 257: // Subscript
      // Fall through
    case 258: // FunctionCall
      // Fall through
    case 259: // DirectSelection
      // Fall through
    case 260: // IndirectSelection
      // Fall through
    case 261: // Increment
      // Fall through
    case 262: // Decrement
      // Fall through
    case 263: // CompoundLiteral
      // Fall through
    case 264: // ExpressionList
      // Fall through
    case 265: // UnaryExpression
      // Fall through
    case 266: // TypeCompatibilityExpression
      // Fall through
    case 267: // OffsetofExpression
      // Fall through
    case 268: // ExtensionExpression
      // Fall through
    case 269: // AlignofExpression
      // Fall through
    case 271: // LabelAddressExpression
      // Fall through
    case 273: // CastExpression
      // Fall through
    case 274: // MultiplicativeExpression
      // Fall through
    case 275: // AdditiveExpression
      // Fall through
    case 276: // ShiftExpression
      // Fall through
    case 277: // RelationalExpression
      // Fall through
    case 278: // EqualityExpression
      // Fall through
    case 279: // AndExpression
      // Fall through
    case 280: // ExclusiveOrExpression
      // Fall through
    case 281: // InclusiveOrExpression
      // Fall through
    case 282: // LogicalAndExpression
      // Fall through
    case 283: // LogicalORExpression
      // Fall through
    case 284: // ConditionalExpression
      // Fall through
    case 285: // AssignmentExpression
      // Fall through
    case 286: // AssignmentOperator
      // Fall through
    case 287: // ExpressionOpt
      // Fall through
    case 288: // Expression
      // Fall through
    case 289: // ConstantExpression
      // Fall through
    case 290: // AttributeSpecifierListOpt
      // Fall through
    case 291: // AttributeSpecifierList
      // Fall through
    case 292: // AttributeSpecifier
      // Fall through
    case 295: // AttributeList
      // Fall through
    case 298: // AssemblyDefinition
      // Fall through
    case 299: // AssemblyExpression
      // Fall through
    case 300: // AssemblyExpressionOpt
      // Fall through
    case 301: // AssemblyStatement
      // Fall through
    case 302: // Assemblyargument
      // Fall through
    case 303: // AssemblyoperandsOpt
      // Fall through
    case 304: // Assemblyoperands
      // Fall through
    case 305: // Assemblyoperand
      // Fall through
    case 306: // AssemblyclobbersOpt
      // Fall through
    case 307: // Assemblyclobbers
      // Fall through
    case 308: // AssemblyGotoargument
      // Fall through
    case 309: // AssemblyJumpLabels
      // Fall through
    case 311: // BindIdentifier
      // Fall through
    case 312: // BindIdentifierInList
      // Fall through
    case 313: // BindVar
      // Fall through
    case 314: // BindEnum
      // Fall through
    case 315: // EnterScope
      // Fall through
    case 316: // ExitScope
      // Fall through
    case 317: // ExitReentrantScope
      // Fall through
    case 318: // ReenterScope
      // Fall through
    case 319: // KillReentrantScope
      // Fall through
    case 130: // TranslationUnit
      // Fall through
    case 131: // ExternalDeclarationList
      // Fall through
    case 132: // ExternalDeclaration
      // Fall through
    case 133: // EmptyDefinition
      // Fall through
    case 134: // FunctionDefinitionExtension
      // Fall through
    case 135: // FunctionDefinition
      // Fall through
    case 136: // FunctionCompoundStatement
      // Fall through
    case 137: // FunctionPrototype
      // Fall through
    case 138: // FunctionOldPrototype
      // Fall through
    case 139: // NestedFunctionDefinition
      // Fall through
    case 140: // NestedFunctionPrototype
      // Fall through
    case 141: // NestedFunctionOldPrototype
      // Fall through
    case 142: // DeclarationExtension
      // Fall through
    case 143: // Declaration
      // Fall through
    case 144: // DefaultDeclaringList
      // Fall through
    case 145: // DeclaringList
      // Fall through
    case 146: // DeclarationSpecifier
      // Fall through
    case 147: // TypeSpecifier
      // Fall through
    case 148: // DeclarationQualifierList
      // Fall through
    case 149: // TypeQualifierList
      // Fall through
    case 156: // BasicDeclarationSpecifier
      // Fall through
    case 157: // BasicTypeSpecifier
      // Fall through
    case 158: // SUEDeclarationSpecifier
      // Fall through
    case 159: // SUETypeSpecifier
      // Fall through
    case 160: // TypedefDeclarationSpecifier
      // Fall through
    case 161: // TypedefTypeSpecifier
      // Fall through
    case 162: // TypeofDeclarationSpecifier
      // Fall through
    case 163: // TypeofTypeSpecifier
      // Fall through
    case 164: // Typeofspecifier
      // Fall through
    case 165: // Typeofkeyword
      // Fall through
    case 173: // ElaboratedTypeName
      // Fall through
    case 174: // StructOrUnionSpecifier
      // Fall through
    case 176: // StructDeclarationList
      // Fall through
    case 177: // StructDeclaration
      // Fall through
    case 178: // StructDefaultDeclaringList
      // Fall through
    case 179: // StructDeclaringList
      // Fall through
    case 180: // StructDeclarator
      // Fall through
    case 181: // StructIdentifierDeclarator
      // Fall through
    case 182: // BitFieldSizeOpt
      // Fall through
    case 183: // BitFieldSize
      // Fall through
    case 184: // EnumSpecifier
      // Fall through
    case 185: // EnumeratorList
      // Fall through
    case 186: // Enumerator
      // Fall through
    case 187: // EnumeratorValueOpt
      // Fall through
    case 188: // ParameterTypeList
      // Fall through
    case 189: // ParameterList
      // Fall through
    case 190: // ParameterDeclaration
      // Fall through
    case 191: // IdentifierList
      // Fall through
    case 192: // Identifier
      // Fall through
    case 193: // IdentifierOrTypedefName
      // Fall through
    case 194: // TypeName
      // Fall through
    case 195: // InitializerOpt
      // Fall through
    case 196: // DesignatedInitializer
      // Fall through
    case 197: // Initializer
      // Fall through
    case 198: // InitializerList
      // Fall through
    case 199: // MatchedInitializerList
      // Fall through
    case 201: // DesignatorList
      // Fall through
    case 203: // ObsoleteArrayDesignation
      // Fall through
    case 204: // ObsoleteFieldDesignation
      // Fall through
    case 205: // Declarator
      // Fall through
    case 206: // TypedefDeclarator
      // Fall through
    case 207: // TypedefDeclaratorMain
      // Fall through
    case 208: // ParameterTypedefDeclarator
      // Fall through
    case 209: // CleanTypedefDeclarator
      // Fall through
    case 210: // CleanPostfixTypedefDeclarator
      // Fall through
    case 211: // ParenTypedefDeclarator
      // Fall through
    case 212: // ParenPostfixTypedefDeclarator
      // Fall through
    case 213: // SimpleParenTypedefDeclarator
      // Fall through
    case 214: // IdentifierDeclarator
      // Fall through
    case 215: // IdentifierDeclaratorMain
      // Fall through
    case 216: // UnaryIdentifierDeclarator
      // Fall through
    case 217: // PostfixIdentifierDeclarator
      // Fall through
    case 218: // AttributedDeclarator
      // Fall through
    case 219: // FunctionDeclarator
      // Fall through
    case 220: // PostfixingFunctionDeclarator
      // Fall through
    case 221: // ArrayDeclarator
      // Fall through
    case 222: // ParenIdentifierDeclarator
      // Fall through
    case 223: // SimpleDeclarator
      // Fall through
    case 224: // OldFunctionDeclarator
      // Fall through
    case 225: // PostfixOldFunctionDeclarator
      // Fall through
    case 226: // AbstractDeclarator
      // Fall through
    case 227: // PostfixingAbstractDeclarator
      // Fall through
    case 228: // ParameterTypeListOpt
      // Fall through
    case 229: // ArrayAbstractDeclarator
      // Fall through
    case 230: // UnaryAbstractDeclarator
      // Fall through
    case 231: // PostfixAbstractDeclarator
      // Fall through
    case 232: // Statement
      // Fall through
    case 233: // LabeledStatement
      // Fall through
    case 234: // CompoundStatement
      // Fall through
    case 235: // LocalLabelDeclarationListOpt
      // Fall through
    case 236: // LocalLabelDeclarationList
      // Fall through
    case 237: // LocalLabelDeclaration
      // Fall through
    case 238: // LocalLabelList
      // Fall through
    case 239: // DeclarationOrStatementList
      // Fall through
    case 240: // DeclarationOrStatement
      // Fall through
    case 241: // DeclarationList
      // Fall through
    case 242: // ExpressionStatement
      // Fall through
    case 243: // SelectionStatement
      // Fall through
    case 244: // IterationStatement
      // Fall through
    case 245: // JumpStatement
      // Fall through
    case 246: // GotoStatement
      // Fall through
    case 247: // ContinueStatement
      // Fall through
    case 248: // BreakStatement
      // Fall through
    case 249: // ReturnStatement
      // Fall through
    case 250: // Constant
      // Fall through
    case 251: // StringLiteralList
      // Fall through
    case 252: // PrimaryExpression
      // Fall through
    case 253: // PrimaryIdentifier
      // Fall through
    case 254: // VariableArgumentAccess
      // Fall through
    case 255: // StatementAsExpression
      return true;

    default:
      return false;
    }
  }

  public boolean changeName(int id) {
    switch(id) {
    case 136: // FunctionCompoundStatement
      return true;

    default:
      return false;
    }
  }

  public String newName(int id) {
    switch(id) {
    case 136: // FunctionCompoundStatement
      return "CompoundStatement";

    default:
      return null;
    }
  }


}
