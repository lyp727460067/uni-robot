#ifndef MULBERRY_H
#define MULBERRY_H
#include "modules/map_manager/map_manager.h"
#include "memory"
namespace uni_robot {
namespace robot {

class MulBerry {
 public:
  void run();

 private:
  bool kill_thread_;
  std::unique_ptr<modules::map_manager::MapManger> map_manager_; 
};

}  // namespace robot

}  // namespace uni_robot

#endif