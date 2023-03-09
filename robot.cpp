#include "robot.hpp"

#include "system.hpp"

/* clang-format off */
Robot::Demo::Param param = {
};
/* clang-format on */

void robot_init() { System::Start<Robot::Demo, Robot::Demo::Param>(param); }
