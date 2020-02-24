package xtc.util;

import xtc.lang.cpp.ForkMergeParser;
import xtc.lang.cpp.PcMap;
import xtc.lang.cpp.PresenceConditionManager;
import xtc.lang.cpp.Syntax;
import xtc.tree.Node;

import java.util.ArrayList;
import java.util.Collection;
import java.util.function.Consumer;
import java.util.function.Predicate;

public class NodeUtilities {
  /**
   * Expand Node object and get the readable text splitted by space.
   *
   * @param o Object to be expanded.
   * @param pc Presence condition of the nomde.
   * @return Expanded node string.
   */
  public static String expandText(Object o, PresenceConditionManager.PresenceCondition pc, Predicate<Node> shoudIgnore) {
    StringBuilder sb = new StringBuilder();
    if (o instanceof Syntax.Language) {
      sb.append(((Syntax.Language) o).getTokenText());
    } else if (o instanceof Pair) {
      Pair<?> b = (Pair<?>) o;

      while (b != Pair.empty()) {
        Object child = b.head();

        if (null != child) {
          sb.append(" ");
          sb.append(expandText(child, pc, shoudIgnore));
        }

        b = b.tail();
      }
    } else if (o instanceof PresenceConditionManager.PresenceCondition) {
      return "";
    } else {
      Node b = (Node) o;
      if (shoudIgnore != null && shoudIgnore.test(b)) {
        return "";
      }
      if (b.hasName(ForkMergeParser.CHOICE_NODE_NAME)) {
        // this is a conditional node.
        for (int i = 0; i < b.size(); i += 2) {
          PresenceConditionManager.PresenceCondition chPc = (PresenceConditionManager.PresenceCondition) b.get(i);
          Object child = b.get(i + 1);
          String chStr = expandText(child, chPc, shoudIgnore);
          if (chStr.isEmpty()) continue;
          if (chPc.restrict(pc).isTrue()) {
            sb.append(chStr);
          } else {
            sb.append("?(");
            sb.append(expandText(child, chPc, shoudIgnore));
            sb.append(")");
          }
        }
      } else {
        boolean first = true;
        for (int i = 0; i < b.size(); i++) {
          Object child = b.get(i);

          if (null != child) {
            if (first) first = false;
            else sb.append(" ");
            sb.append(expandText(child, pc, shoudIgnore));
          }
        }
      }
    }
    return sb.toString().trim();
  }

  /**
   * Select nodes according to the give path pattern.
   * @param pc presence condition.
   * @param n node to select from.
   * @param path The path pattern for matching node.
   * @return A new PcMap that contains lists of node matched with path pattern.
   */
  public static Collection<javafx.util.Pair<PresenceConditionManager.PresenceCondition, Node>>
  selectNodesInOrder(PresenceConditionManager.PresenceCondition pc, Node n, String path) {
    String[] track = path.split("\\.");
    return _selectNodes(pc, n, track, 0).getList();
  }

  /**
   * Select nodes according to the give path pattern.
   * @param pc presence condition.
   * @param n node to select from.
   * @param path The path pattern for matching node.
   * @return A new PcMap that contains lists of node matched with path pattern.
   */
  public static PcMap<Node> selectNodes(PresenceConditionManager.PresenceCondition pc, Node n, String path) {
    String[] track = path.split("\\.");
    return _selectNodes(pc, n, track, 0).getPcMap();
  }

  /** Helper function for selectNodes */
  private static SelectNodesResult _selectNodes(PresenceConditionManager.PresenceCondition pc, Node n, String[] track, int idx) {
    SelectNodesResult result = new SelectNodesResult();
    if (idx >= track.length) {
      result.add(pc, n);
      return result;
    }
    String pat = track[idx];
    String nextPat = null;
    if (idx + 1 < track.length) {
      nextPat = track[idx + 1];
    }
    if (!n.isGeneric()) {
      // Select from terminal node
      String name;
      if (n instanceof Syntax.Text) {
        name = "Text";
      } else if (n instanceof Syntax.Text) {
        name = "Language";
      } else {
        name = "#";
      }
      if (null == nextPat) {
        if (matchPat(name, pat)) {
          result.add(pc, n);
        }
      }
    } else if (n.getName().equals("Conditional")) {
      // Select from Conditional node
      for (int i = 0; i < n.size(); i += 2) {
        PresenceConditionManager.PresenceCondition chPc = (PresenceConditionManager.PresenceCondition)n.get(i);
        Node ch = n.getNode(i + 1);
        result.addAll(_selectNodes(chPc, ch, track, idx));
      }
    } else {
      // Select from Non-terminal node
      String name = n.getName();
      if (matchPat(name, pat)) {
        if (null == nextPat) {
          result.add(pc, n);
        } else {
          for (int i = 0; i < n.size(); ++i) {
            result.addAll(_selectNodes(pc, n.getNode(i), track, idx + 1));
          }
        }
      } else if (pat.equals("*")) { // match any node for any times
        if (null == nextPat) { // '*' can't be the last element

        } else if (matchPat(name, nextPat)) { // exactly match next pattern
          result = _selectNodes(pc, n, track, idx + 1);
        } else {
          for (int i = 0; i < n.size(); ++i) {
            result.addAll(_selectNodes(pc, n.getNode(i), track, idx));
          }
        }
      }
    }
    return result;
  }

  private static boolean matchPat(String name, String pat) {
    if (pat.equals("?")) return true;
    String[] parts = pat.split("\\|");
    for (int i = 0; i < parts.length; ++i) {
      if (parts[i].equals(name)) {
        return true;
      }
    }
    return false;
  }

  private static class SelectNodesResult {
    private Collection<javafx.util.Pair<PresenceConditionManager.PresenceCondition, Node>> lst = new ArrayList<>();

    public void add(PresenceConditionManager.PresenceCondition pc, Node node) {
      lst.add(new javafx.util.Pair<>(pc, node));
    }

    public void addAll(SelectNodesResult another) {
      lst.addAll(another.lst);
    }

    public Collection<javafx.util.Pair<PresenceConditionManager.PresenceCondition, Node>> getList() {
      return lst;
    }

    public PcMap<Node> getPcMap() {
      PcMap<Node> pcMap = new PcMap<>();
      for (javafx.util.Pair<PresenceConditionManager.PresenceCondition, Node> pair: lst) {
        pcMap.add(pair.getKey(), pair.getValue());
      }
      return pcMap;
    }
  }
}
