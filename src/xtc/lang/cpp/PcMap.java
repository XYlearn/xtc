package xtc.lang.cpp;

/**
 * A Map from presence condition to its corresponding element list.
 * @param <T> The element type of value list
 */
public class PcMap<T> extends ListMap<PresenceConditionManager.PresenceCondition, T> {

    @Override
    public void add(PresenceConditionManager.PresenceCondition pc, T t) {
        if (pc.getBDD().isZero()) return;
        super.add(pc, t);
    }
}
