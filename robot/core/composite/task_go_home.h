#ifndef TASK_GO_HOME_H
#define TASK_GO_HOME_H
#include <list>
#include "task.h"
#include "memory"
namespace uni_robot {
namespace robot {
namespace core {
template<typename Entity>
class TaskGoHome :public TaskComosite<Entity>{
 public:
  void Activate() ;
  int  Process() ;
  void Terminate() ;
 private:


};

}  // namespace core

}  // namespace robot

}

