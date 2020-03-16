package xtc.lang.cpp;

import xtc.lang.cpp.SuperC;
import xtc.tree.Node;
import xtc.tree.Visitor;
import xtc.type.AST;

import java.io.*;
import java.nio.file.Paths;
import java.util.EnumSet;
import java.util.Map;

public class FeatureSuperC extends SuperC {
    @Override
    public void process(Node ast) {
        super.process(ast);
        if (runtime.test("extractFeature") || runtime.test("collectUsage")) {
            ASTVisitor visitor = new ASTVisitor(runtime, presenceConditionManager, initialParsingContext.symtab);
            // set workdir to get relative path of source
            String workdir = runtime.getString("workdir");
            if (null == workdir) {
                workdir = Paths.get("").toAbsolutePath().toString();
            }
            visitor.setWorkdir(workdir);
            visitor.dispatch(ast, presenceConditionManager.new PresenceCondition(true));

            if (runtime.test("extractFeature")) {
                String path = runtime.getString("extractFile");
                Writer writer;
                try {
                    if (path == null) {
                        writer = new PrintWriter(System.out);
                    } else {
                        File file = new File(path);
                        if (!file.exists() && !file.createNewFile()) {
                            System.err.println("[-] Fail to extract features to file.");
                        }
                        writer = new FileWriter(file);
                    }
                    FeatureManager.current().toJson(writer, runtime.test("prettyFeature"));
                    writer.close();
                } catch (IOException e) {
                    System.err.println("[-] Fail to extract features to file.");
                }
            }

            if (runtime.test("collectUsage")) {
                Map<String, EnumSet<ASTVisitor.MacroUsage>> usage = visitor.getMacroUsage();
                for (Map.Entry<String, EnumSet<ASTVisitor.MacroUsage>> entry: usage.entrySet()) {
                    System.out.format("%s : %s\n", entry.getKey(), entry.getValue());
                }
            }
        }
    }

    @Override
    public void init() {
        super.init();
        runtime
          .word("extractFile", "extractFile", false,
            "The path of file to output extraction result.")
          .word("workdir", "workdir", false,
            "The workdir of the FeatureSuperC.")
          .bool("extractFeature", "extractFeature", false,
            "Extract features from AST and stream result.")
          .bool("prettyFeature", "prettyFeature", false,
            "pretty print the extracted features.")
          .bool("collectUsage", "collectUsage", false,
            "Collect usage statistic from AST.");
    }

    public static void main(String[] args) {
        new FeatureSuperC().run(args);
    }
}
