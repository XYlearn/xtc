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
public class ExpressionSemanticValues implements SemanticValues {
  private static ExpressionSemanticValues ref;

  public static ExpressionSemanticValues getInstance() {
    if (ref == null)
        ref = new ExpressionSemanticValues();
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
    if (0 <= id && id < 65) {
      return ValueType.NODE;
    }
    switch (id - 65) {
      case 0: // LPAREN (65)
        // Fall through
      case 1: // RPAREN (66)
        // Fall through
      case 2: // COMMA (67)
        // Fall through
      case 5: // LBRACE (70)
        // Fall through
      case 6: // RBRACE (71)
        // Fall through
      case 7: // LBRACK (72)
        // Fall through
      case 8: // RBRACK (73)
        // Fall through
      case 9: // DOT (74)
        // Fall through
      case 22: // QUESTION (87)
        // Fall through
      case 23: // COLON (88)
        // Fall through
      case 24: // SEMICOLON (89)
        // Fall through
      case 25: // ASSIGN (90)
        return ValueType.LAYOUT;

      case 82: // CheckDefined (147)
        return ValueType.ACTION;

      case 63: // ConstantExpression (128)
        // Fall through
      case 64: // Constant (129)
        // Fall through
      case 69: // PrimaryExpression (134)
        // Fall through
      case 71: // UnaryExpression (136)
        // Fall through
      case 83: // MultiplicativeExpression (148)
        // Fall through
      case 84: // AdditiveExpression (149)
        // Fall through
      case 85: // ShiftExpression (150)
        // Fall through
      case 86: // RelationalExpression (151)
        // Fall through
      case 87: // EqualityExpression (152)
        // Fall through
      case 88: // BitwiseAndExpression (153)
        // Fall through
      case 90: // BitwiseXorExpression (155)
        // Fall through
      case 92: // BitwiseOrExpression (157)
        // Fall through
      case 94: // LogicalAndExpression (159)
        // Fall through
      case 96: // LogicalOrExpression (161)
        // Fall through
      case 98: // ConditionalExpression (163)
        // Fall through
      case 99: // Word (164)
        return ValueType.PASS_THROUGH;

      case 73: // UnaryMinusOp (138)
        // Fall through
      case 75: // UnaryPlusOp (140)
        // Fall through
      case 77: // LogicalNegateOp (142)
        // Fall through
      case 79: // BitwiseNegateOp (144)
        // Fall through
      case 81: // DefinedKeyword (146)
        // Fall through
      case 89: // BitwiseAndOp (154)
        // Fall through
      case 91: // BitwiseXorOp (156)
        // Fall through
      case 93: // BitwiseOrOp (158)
        // Fall through
      case 95: // LogicalAndOp (160)
        // Fall through
      case 97: // LogicalOrOp (162)
        return ValueType.VOID;

      default:
        return ValueType.NODE;
    }
  }
  public boolean isComplete(int id) {
    switch(id) {
    case 128: // ConstantExpression
      // Fall through
    case 129: // Constant
      // Fall through
    case 161: // LogicalOrExpression
      // Fall through
    case 130: // IntegerConstant
      // Fall through
    case 163: // ConditionalExpression
      // Fall through
    case 134: // PrimaryExpression
      // Fall through
    case 135: // PrimaryIdentifier
      // Fall through
    case 136: // UnaryExpression
      // Fall through
    case 137: // UnaryMinusExpression
      // Fall through
    case 139: // UnaryPlusExpression
      // Fall through
    case 141: // LogicalNegationExpression
      // Fall through
    case 143: // BitwiseNegationExpression
      // Fall through
    case 145: // DefinedExpression
      // Fall through
    case 148: // MultiplicativeExpression
      // Fall through
    case 149: // AdditiveExpression
      // Fall through
    case 150: // ShiftExpression
      // Fall through
    case 151: // RelationalExpression
      // Fall through
    case 152: // EqualityExpression
      // Fall through
    case 153: // BitwiseAndExpression
      // Fall through
    case 155: // BitwiseXorExpression
      // Fall through
    case 157: // BitwiseOrExpression
      // Fall through
    case 159: // LogicalAndExpression
      return true;

    default:
      return false;
    }
  }

  public boolean changeName(int id) {
    switch(id) {
    default:
      return false;
    }
  }

  public String newName(int id) {
    switch(id) {
    default:
      return null;
    }
  }


}
