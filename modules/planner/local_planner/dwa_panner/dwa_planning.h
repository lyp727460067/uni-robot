#ifndef LOCAL_DWA_PLANNING_H
#define  LOCAL_DWA_PLANNING_H

#include "local_planning_interface.h"
namespace uni_robot {
namespace planning {

namespace local_plan {

  class LocalDwaPlanning:public  LocalPlanningInterface
  {
  public:
  constexpr static const char* kConfigurationLocalPlaningName =
      "Dwa";



  };

}
}  // namespace planning
}  // namespace uni_robot


#endif