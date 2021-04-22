#ifndef _TASK
#define _TASK
#include <string>

namespace uni_robot {
namespace robot {
namespace core {
template<typename Entity>
class Task {
 public:
  enum TaskState { active, inactive, completed, failed };
  void ActivateIfnactive();
  virtual void Activate() = 0;
  virtual int Process() = 0;
  virtual void Terminate() = 0;
 private:
  std::string task_name_;
};

}  // namespace core

}  // namespace robot

}  // namespace uni_robot

#endif