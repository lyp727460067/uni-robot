#include "gflags/gflags.h"
#include "glog/logging.h"
#include "robot_interface.h"
#include "mulberry.h"
#include "memory"



void run() {
  std::unique_ptr<robot::MulBerry> robot = std::make_unique<robot::MulBerry>();
  robot->run();
}
int main(int argc,char**argv)
{
  google::InitGoogleLogging(argv[0]);
  google::ParseCommandLineFlags(&argc, &argv, true);
  LOG(INFO)<<"helle mulberry";
  run();
  return EXIT_SUCCESS;

}