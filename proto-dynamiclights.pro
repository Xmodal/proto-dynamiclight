TEMPLATE = subdirs

# Silent a warning on macOS:
CONFIG += sdk_no_version_check

# SNNHistoryGraph:
sub_SNNHistoryGraph.subdir = SNNHistoryGraph
sub_SNNHistoryGraph.target = sub_SNNHistoryGraph
SUBDIRS += SNNHistoryGraph

# StructureTest:
sub_StructureTest.subdir = StructureTest
sub_StructureTest.target = sub_StructureTest
SUBDIRS += StructureTest

# 3DHistoryGraph
sub_3DHistoryGraph.subdir = 3DHistoryGraph
sub_3DHistoryGraph.target = sub_3DHistoryGraph
SUBDIRS += 3DHistoryGraph

