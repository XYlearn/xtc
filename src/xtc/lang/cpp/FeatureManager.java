package xtc.lang.cpp;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import javafx.util.Pair;

import java.io.PrintWriter;
import java.io.Writer;
import java.util.*;

public class FeatureManager extends PcMap<Feature> {
    /** Storage to get from or put to stored feature manager */
    private static Stack<FeatureManager> storage = new Stack<>();

    /** Current FeatureManager */
    private static FeatureManager currentFM = new FeatureManager();

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

    public String toJson(boolean pretty) {
        Gson gson = new GsonBuilder().setPrettyPrinting().create();
        return gson.toJson(internMap);
    }

    @Deprecated
    public void print(PrintWriter writer) {
        print(writer, "");
    }

    @Deprecated
    public void print(PrintWriter writer, String indent) {
        String newIndent = indent + "     ";

        for (Map.Entry<PresenceConditionManager.PresenceCondition, Collection<Feature>> entry: entries()) {
            Collection<Feature> features = entry.getValue();
            PresenceConditionManager.PresenceCondition pc = entry.getKey();
            writer.append(indent);
            writer.append(pc.toString());
            writer.append("\n");
            writer.append(indent);
            boolean hasFuncFeature = false;
            for (Feature feature: features) {
                if (feature.getType().equals(Feature.FeatureType.FUNCTION)) {
                    hasFuncFeature = true;
                    break;
                }
            }
            writer.append("= [");
            Iterator<Feature> iterator = features.iterator();
            while (iterator.hasNext()) {
                Feature feature = iterator.next();
                boolean isFuncFeature = feature.getType().equals(Feature.FeatureType.FUNCTION);
                if (isFuncFeature) {
                    Pair<String, FeatureManager> pair = (Pair<String, FeatureManager>)feature.getValue();
                    String funcName = pair.getKey();
                    FeatureManager funcFeatures = pair.getValue();
                    writer.append("\n");
                    writer.append(newIndent);
                    writer.append(funcName);
                    writer.append(":\n");
                    funcFeatures.print(writer, newIndent);
                } else {
                    writer.append(feature.toString());
                }
                if (iterator.hasNext()) {
                    writer.append(", ");
                } else {
                    if (isFuncFeature) {
                        writer.append(indent);
                    } else {
                    }
                    writer.append("]");
                    writer.append("\n");
                }
            }
        }
    }
}
