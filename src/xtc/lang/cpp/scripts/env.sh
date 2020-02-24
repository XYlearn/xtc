#!/bin/sh

# xtc - The eXTensible Compiler
# Copyright (C) 2009-2012 New York University
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# version 2 as published by the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,
# USA.


# This script sets up SuperC environment variables.

export XTC_ROOT=/Users/l1nk/WORK/GradDesign/test_xtc/xtc
export JAVA_DEV_ROOT=/Users/l1nk/WORK/GradDesign/test_xtc/xtc
export JAVA_ARGS="-Xms2048m -Xmx4048m -Xss128m" # JVM settings.
# Java classpath and scripts path settings
export PATH_SEP=:
export CLASSPATH=$CLASSPATH:$XTC_ROOT/classes:$XTC_ROOT/bin/junit.jar:$XTC_ROOT/bin/antlr.jar:$XTC_ROOT/bin/javabdd.jar:$XTC_ROOT/bin/org.sat4j.core.jar
export PATH=$PATH:$JAVA_DEV_ROOT/src/xtc/lang/cpp/scripts

