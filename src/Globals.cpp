#include "tp_pipeline_tensorflow/Globals.h"
//#include "tp_pipeline_tensorflow/step_delegates/StubStepDelegate.h"

#include "tp_pipeline/StepDelegateMap.h"

//##################################################################################################
namespace tp_pipeline_tensorflow
{
TDP_DEFINE_ID(                   tensorflowSID,                       "Tensorflow")

//##################################################################################################
void createStepDelegates(tp_pipeline::StepDelegateMap& stepDelegates)
{
  TP_UNUSED(stepDelegates);
  //stepDelegates.addStepDelegate(new StubStepDelegate);
}
}
