#include "../movement.hpp"
#include "../helper_functions.hpp"
#include "vex.h"
//PID Straight and turn arguments:
// MoveEncoderPID(TestPara, motor speed, encoder travel distance (inches), time to full speed(sec), relative heading(to starting position), braking?)
// TurnMaxTimePID(TestPara, Desired Heading -180 to 180, time out to calculate turn, Braking?)
// MoveTimePID(TestPara, motor speed, time traveled (sec), time to full speed, heading, false);

void test() {
    // declare initial conditions
    //PIDDataSet TestPara={4,0.1,0.2};
    PIDDataSet TestPara={1.5,0.1,0.15};
    MoveEncoderPID(TestPara, -80, 20, 0.4, 0, true);
    MoveEncoderPID(TestPara, -40, 10, 0.5, 0, true);
    Clamp.set(true);
    wait(200, msec);
    RunRoller(100);
    wait(100, msec);
    TurnMaxTimePID(TestPara, 115, 0.4, true);
    MoveEncoderPID(TestPara, 70, 25, 0.4, 115, true);
    MoveEncoderPID(TestPara, -50, 9 , 0.4, 115, true);
    TurnMaxTimePID(TestPara, 98, 0.4, true);
    MoveEncoderPID(TestPara, 50, 23, 0.4, 98, true);
    MoveEncoderPID(TestPara, -50, 28, 0.4, 98, true);
    TurnMaxTimePID(TestPara, 54, 0.4, true);
    MoveEncoderPID(TestPara, 50, -20, 0.4, 54, true);

    
    
}