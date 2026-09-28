#include "vision.hpp"
#include "robot.hpp"
// including the needed srcs
#define VISION_PORT 7

#define BLU_CONFIG 1
#define RED_CONFIG 2
#define YEL_CONFIG 3
// defining the port + the color configuration for the vision sensor
void opcontrol() {
    pros::AIVision aivision(VISION_PORT);
    aivision.reset();
