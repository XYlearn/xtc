package xtc.lang.cpp;

import xtc.lang.cpp.SuperC;
import xtc.tree.Node;
import xtc.tree.Visitor;
import xtc.type.AST;

import java.io.PrintWriter;

public class FeatureSuperC extends SuperC {
    @Override
    public void process(Node ast) {
        super.process(ast);
        if (runtime.test("extractFeature")) {
            ASTVisitor visitor = new ASTVisitor(presenceConditionManager, initialParsingContext.symtab);
            visitor.dispatch(ast, presenceConditionManager.new PresenceCondition(true));
            PrintWriter writer = new PrintWriter(System.out);
            FeatureManager.current().print(writer);
            writer.close();
        }
    }

    @Override
    public void init() {
        super.init();
        runtime.bool("extractFeature", "extractFeature", false,
            "Extract features from AST and print result");
    }

    public static void main(String[] args) {
        new FeatureSuperC().run(args);
    }
}
