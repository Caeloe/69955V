#include "pros/motors.h"
#include "subsystems.hpp"

void pre_match_setup() {
    ladybrown.set_brake_mode_all(pros::E_MOTOR_BRAKE_HOLD);
    doinker.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
    mogo.set(true);
    doinker.move(-127);
}