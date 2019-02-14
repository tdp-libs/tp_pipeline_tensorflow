TARGET = tp_pipeline_tensorflow
TEMPLATE = lib

DEFINES += TP_PIPELINE_TENSORFLOW_LIBRARY

SOURCES += src/Globals.cpp
HEADERS += inc/tp_pipeline_tensorflow/Globals.h


#-- Delegates --------------------------------------------------------------------------------------
SOURCES += src/step_delegates/StubStepDelegate.cpp
HEADERS += inc/tp_pipeline_tensorflow/step_delegates/StubStepDelegate.h


#-- Members ----------------------------------------------------------------------------------------
SOURCES += src/members/StubMember.cpp
HEADERS += inc/tp_pipeline_tensorflow/members/StubMember.h
