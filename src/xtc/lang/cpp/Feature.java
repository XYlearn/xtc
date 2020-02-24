package xtc.lang.cpp;

import javafx.util.Pair;
import xtc.util.Utilities;

public class Feature {

    public enum FeatureType {
        NUMBER, STRING, FUNCTION, GVREF, FUNCCALL
    }

    private Object obj;
    private FeatureType type;

    public Feature(FeatureType type, Object obj) {
        this.type = type;
        this.obj = obj;
    }

    /**
     * Get type of feature
     * @return feature type
     */
    public FeatureType getType() {
        return type;
    }

    /**
     * Get value of feature
     * @return feature value
     */
    public Object getValue() {
        return obj;
    }

    @Override
    public boolean equals(Object obj) {
        if (this.type == FeatureType.FUNCTION) {
            return this == obj;
        }
        if (obj instanceof Feature) {
            Feature that = (Feature)obj;
            return that.type.equals(this.type) && that.obj.equals(this.obj);
        }
        return false;
    }

    @Override
    public int hashCode() {
        return type.hashCode() * 7 + obj.hashCode();
    }

    @Override
    public String toString() {
        if (type.equals(FeatureType.STRING)) {
            return Utilities.escape((String) obj, Utilities.C_ESCAPES);
        } else if (type.equals(FeatureType.FUNCCALL)) {
            return String.format("Call(%s)", obj);
        } else if (type.equals(FeatureType.GVREF)) {
            return String.format("GV(%s)", obj);
        }
        return obj.toString();
    }
}
