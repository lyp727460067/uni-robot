#ifndef EVALUATOR_H
#define eVALUATOR_H
#include <string>
namespace uni_robot {
namespace robot {
namespace core {
template <typename Entity>
class Evaluator {
 public:
  void Evaluatoring() = 0;

 private:
  std::string evaluator_name_;
};

}  // namespace core
}  // namespace robot
}  // namespace uni_robot

#endif