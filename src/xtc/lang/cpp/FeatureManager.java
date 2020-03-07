package xtc.lang.cpp;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.annotations.Expose;
import javafx.util.Pair;
import xtc.util.Function;

import java.io.PrintWriter;
import java.io.Writer;
import java.util.*;
import java.util.stream.Stream;

public class FeatureManager extends PcMap<Feature> {
    /** Storage to get from or put to stored feature manager */
    private static Stack<FeatureManager> storage = new Stack<>();

    /** Current FeatureManager */
    private static FeatureManager currentFM = new FeatureManager();

    public static Map<String, Feature.FunctionFeatureValue> funcs = new HashMap<>();

    public void toJson(Writer writer, boolean pretty) {
        Gson gson = new GsonBuilder().setPrettyPrinting().create();
        gson.toJson(internMap, internMap.getClass(), writer);
    }

    /**
     * Store feature manager.
     * @param fm Feature manager to be stored.
     * @return The new current feature manager.
     */
    public static FeatureManager store() {
        storage.push(currentFM);
        currentFM = new FeatureManager();
        return currentFM;
    }

    /**
     * Load feature manager.
     * @return the loaded feature manager which is previously stored.
     */
    public static FeatureManager load() {
        currentFM = storage.pop();
        return currentFM;
    }

    /**
     * Get current feature manager.
     * @return Current feature manager.
     */
    public static FeatureManager current() {
        return currentFM;
    }

    public void trimNonUnique() {
        ListMap<Feature, PresenceConditionManager.PresenceCondition> featurePcMap = new ListMap<>();
        for (Map.Entry<PresenceConditionManager.PresenceCondition, Collection<Feature>> entry: entries()) {
            PresenceConditionManager.PresenceCondition pc = entry.getKey();
            Collection<Feature> features = entry.getValue();
            for (Feature feature: features) {
                featurePcMap.add(feature, pc);
            }
        }
        for (Map.Entry<Feature, Collection<PresenceConditionManager.PresenceCondition>> entry: featurePcMap.entries()) {
            Feature feature = entry.getKey();
            Collection<PresenceConditionManager.PresenceCondition> pcs = entry.getValue();
            if (pcs.size() > 1) {
                // non unique
                for (PresenceConditionManager.PresenceCondition pc: pcs) {
                    this.remove(pc, feature);
                }
                Iterator<PresenceConditionManager.PresenceCondition> iterator = pcs.iterator();
                PresenceConditionManager.PresenceCondition newPc = iterator.next();
                while (iterator.hasNext()) {
                    newPc = newPc.or(iterator.next());
                }
                this.add(newPc, feature);
            }
        }
    }

}
