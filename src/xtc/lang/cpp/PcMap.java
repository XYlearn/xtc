package xtc.lang.cpp;

import java.util.*;

/**
 * A Map from presence condition to its corresponding element list.
 * @param <T> The element type of value list
 */
public class PcMap<T> {

    private Map<PresenceConditionManager.PresenceCondition, Collection<T>> internMap = new HashMap<>();

    /**
     * add a pc-feature to manager.
     * @param pc Presence condition.
     * @param feature Feature.
     */
    public void add(PresenceConditionManager.PresenceCondition pc, T t) {
        if (pc.getBDD().isZero()) return;
        if (internMap.containsKey(pc)) {
            internMap.get(pc).add(t);
        } else {
            Collection<T> ts = new HashSet<>();
            ts.add(t);
            internMap.put(pc, ts);
        }
    }

    /**
     * Merge another PcMap to this PcMap.
     * @param pcmap Another pcmap to merge with.
     */
    public void addAll(PcMap<T> pcmap) {
        for (Map.Entry<PresenceConditionManager.PresenceCondition, Collection<T>> e: pcmap.internMap.entrySet()) {
            PresenceConditionManager.PresenceCondition pc = e.getKey();
            Collection<T> ts = e.getValue();
            if (internMap.containsKey(e.getKey())) {
                internMap.get(pc).addAll(ts);
            } else {
                internMap.put(pc, ts);
            }
        }
    }

    /**
     * Get list of features under given presence condition.
     * @param pc presence condition.
     * @return Collection of features under the presence condition.
     */
    public Collection<T> get(PresenceConditionManager.PresenceCondition pc) {
        return internMap.get(pc);
    }

    /**
     * Get enties of pc and coresponding feature lists.
     * @return enties of pc and coresponding feature lists.
     */
    public Set<Map.Entry<PresenceConditionManager.PresenceCondition, Collection<T>>> entries() {
        return internMap.entrySet();
    }

    /**
     * Get set of presence conditions.
     * @return Set of presence conditions.
     */
    public Set<PresenceConditionManager.PresenceCondition> keySet() {
        return internMap.keySet();
    }

    /**
     * Collect all elements of all presence condition.
     * @return A collection contains all elements of PcMap.
     */
    public Collection<T> collect() {
        Collection<Collection<T>> vals = internMap.values();
        int length = 0;
        for (Collection<T> lst: vals) {
            length += lst.size();
        }
        Collection<T> result = new HashSet<>(length);
        internMap.values().forEach(lst -> result.addAll(lst));
        return result;
    }

    public boolean isEmpty() {
        return internMap.isEmpty();
    }

    @Deprecated
    public void merge() {
        Set<Map.Entry<PresenceConditionManager.PresenceCondition, Collection<T>>> setOfEntries = internMap.entrySet();
        Iterator<Map.Entry<PresenceConditionManager.PresenceCondition, Collection<T>>> iterator1 = setOfEntries.iterator();
        while (iterator1.hasNext()) {
            Map.Entry<PresenceConditionManager.PresenceCondition, Collection<T>> entry1 = iterator1.next();
            Iterator<Map.Entry<PresenceConditionManager.PresenceCondition, Collection<T>>> iterator2 = setOfEntries.iterator();
            while (iterator2.hasNext()) {
                Map.Entry<PresenceConditionManager.PresenceCondition, Collection<T>> entry2 = iterator2.next();
                if (entry1 != entry2) {
                    PresenceConditionManager.PresenceCondition pc1 = entry1.getKey();
                    PresenceConditionManager.PresenceCondition pc2 = entry2.getKey();
                    PresenceConditionManager.PresenceCondition pcAndResult = pc1.and(pc2);
                    if (pcAndResult.is(pc1)) {

                    }
                }
            }
        }
    }
}
