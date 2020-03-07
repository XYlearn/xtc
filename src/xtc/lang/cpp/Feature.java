package xtc.lang.cpp;

import jdk.nashorn.internal.ir.FunctionCall;
import xtc.util.Utilities;

public class Feature {

    public enum FeatureType {
        NUMBER, STRING, FUNCTION, GVREF, FUNCCALL
    }

    private FeatureType type;
    private Object val;

    public Feature(FeatureType type, Object obj) {
        this.type = type;
        this.val = obj;
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
        return val;
    }

    @Override
    public boolean equals(Object obj) {
        if (this.type == FeatureType.FUNCTION) {
            return this == obj;
        }
        if (obj instanceof Feature) {
            Feature that = (Feature)obj;
            return that.type.equals(this.type) && that.val.equals(this.val);
        }
        return false;
    }

    @Override
    public int hashCode() {
        return type.hashCode() * 7 + val.hashCode();
    }

    @Override
    public String toString() {
        if (type.equals(FeatureType.STRING)) {
            return "\"" + Utilities.escape((String) val, Utilities.C_ESCAPES) + "\"";
        } else if (type.equals(FeatureType.FUNCCALL)) {
            return String.format("Call(%s)", val);
        } else if (type.equals(FeatureType.GVREF)) {
            return String.format("GV(%s)", val);
        }
        return val.toString();
    }

    public static class FunctionFeatureValue {
        public String name;
        public String src;
        public int argCount;
        public FeatureManager features;

        public FunctionFeatureValue(String name, String src, int argCount, FeatureManager features) {
            this.name = name;
            this.src = src;
            this.features = features;
            this.argCount = argCount;
        }
    }

    public static class FuncCallFeatureValue {
        public String name;
        public String src;

        public FuncCallFeatureValue(String name, String src) {
            this.name = name;
            this.src = src;
        }
    }

    public static class GVRefFeatureValue {
        public String name;
        public String src;
        public GVRefFeatureValue(String name, String src) {
            this.name = name;
            this.src = src;
        }
    }
}
