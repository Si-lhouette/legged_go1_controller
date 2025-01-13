#include <memory>

#include "legged_go1_controller/LeggedGo1Controller.h"

namespace legged {
vector_t LeggedGo1Controller::playModel(const vector_t& observations) const {
  std::cerr << "LeggedGo1Controller::playModel" << std::endl;
  return OnnxController::playModel(observations);
}
}  // namespace legged

#include "pluginlib/class_list_macros.hpp"

PLUGINLIB_EXPORT_CLASS(legged::LeggedGo1Controller, controller_interface::ControllerInterface)
