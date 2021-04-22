#ifndef _LAYER_H
#define _LAYER_H
#include  <memory>
#include  "grid_map.h"
namespace uni_robot{
namespace planning {
namespace costmap {
  class Layer
  {
    public:


    private:
    std::shared_ptr<GridMap> correspondence_grid_map_;
    


  }
}

}
}  // namespace planning

#endif
