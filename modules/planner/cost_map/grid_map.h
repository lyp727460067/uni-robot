#ifndef GRID_MAP
#define  GRID_MAP
#include <vector>
#include "Eigen/Core"
#include "Eigen/Geometry"
namespace uni_robot{
namespace planning {

namespace costmap {



struct CellLimits {
  CellLimits() = default;
  CellLimits(int init_num_x_cells, int init_num_y_cells)
      : num_x_cells(init_num_x_cells), num_y_cells(init_num_y_cells) {}
  int num_x_cells = 0;
  int num_y_cells = 0;
};
 
class MapLimits
{
  private:
  double resolution_;
  Eigen::Vector2d max_;
  CellLimits cell_limits_;
};


class GridMap{
  
  public:
   bool IsKnown(const Eigen::Array2i& cell_index) const {}
   uint16_t GetCorrespondenceCost(const Eigen::Array2i& cell_index) const {}

  private:
   MapLimits limits_;
   std::vector<uint16_t> correspondence_cost_cells_;
   Eigen::AlignedBox2i known_cells_box_;
};
}
}  // namespace costmap

}  // namespace planning

#endif