export XTC_ROOT=$(pwd)
export JAVA_DEV_ROOT=$XTC_ROOT
export CLASSPATH=$CLASSPATH:$XTC_ROOT/classes:$XTC_ROOT/bin/junit.jar:$XTC_ROOT/bin/antlr.jar:$XTC_ROOT/bin/javabdd.jar:$XTC_ROOT/bin/org.sat4j.core.jar
export JAVA_ARGS="-Xms2048m -Xmx4048m -Xss128m"
export JAVA_HOME=$JAVA_HOME
export PATH_SEP=:
export SOURCE_DIR=$XTC_ROOT/src
