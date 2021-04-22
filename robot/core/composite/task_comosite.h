#ifndef _TASK_COMOSITE_H
#define _TASK_COMOSITE_H
#include <list>
#include "task.h"
#include "memory"
namespace uni_robot {
namespace robot {
namespace core {
template<typename Entity>
class TaskComosite :public Task<Entity>{
 public:
  virtual void Activate() = 0;
  virtual int  Process() = 0;
  virtual void Terminate() = 0;
  void AddSubTask(std::unique_ptr<Task<Entity>> task);
  void RemoveAllTask();

 private:
  std::list<Task<Entity>>  sub_task_;
  int PorcessSubTask(); 


};

}  // namespace core

}  // namespace robot

}





#endif