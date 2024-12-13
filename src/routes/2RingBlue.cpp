#include "../movement.hpp"
#include "../helper_functions.hpp"
#include "vex.h"
//PID Straight and turn arguments:
// MoveEncoderPID(TestPara, motor speed, encoder travel distance (inches), time to full speed(sec), relative heading(to starting position), braking?)
// TurnMaxTimePID(TestPara, Desired Heading -180 to 180, time out to calculate turn, Braking?)
// MoveTimePID(TestPara, motor speed, time traveled (sec), time to full speed, heading, false);

void test4() {
    // declare initial conditions
    //PIDDataSet TestPara={4,0.1,0.2};
    PIDDataSet TestPara={1.5,0.1,0.15};
    MoveEncoderPID(TestPara, 80, 20, 0.4, 0, true);
    MoveEncoderPID(TestPara, 40, 10, 0.5, 0, true);
    Clamp.set(true);
    wait(200, msec);
    RunRoller(100);
    wait(100, msec);
    TurnMaxTimePID(TestPara, 54, 0.4, true);
    MoveEncoderPID(TestPara, 70, 24, 0.4, 54, true);
 
    
    
}