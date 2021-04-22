#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H


#include <vector>
#include <list>
#include "task.h"
#include "memory"
namespace uni_robot {
namespace robot {
namespace core {
template<typename Entity>
class TaskManger :public TaskComosite<Entity>{
 public:
  void Activate() ;
  int  Process() ;
  void Terminate() ;
 private:
  std::vector<>

};

}  // namespace core

}  // namespace robot

}
