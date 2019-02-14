#ifndef tp_pipeline_tensorflow_Globals_h
#define tp_pipeline_tensorflow_Globals_h

#include "tp_utils/StringID.h"

namespace tp_pipeline
{
class StepDelegateMap;
}

//##################################################################################################
//! Add tensorflow to the pipeline pipeline.
namespace tp_pipeline_tensorflow
{
TDP_DECLARE_ID(                   tensorflowSID,                       "Tensorflow")

//##################################################################################################
//! Add the step delegates that this module provides to the StepDelegateMap
void createStepDelegates(tp_pipeline::StepDelegateMap& stepDelegates);
}

#endif
