#ifndef LOCA_TEB_PLANNING_H
#define  LOCA_TEB_PLANNING_H


#include "local_planning_interface.h"
namespace uni_robot {
namespace planning {

namespace local_plan {

  class LocalTebPlanning:public  LocalPlanningInterface
  {
     public:
      constexpr static const char* kConfigurationLocalPlaningName =
      "Teb";



  };

}
}  // namespace planning
}  // namespace uni_robot
#endif