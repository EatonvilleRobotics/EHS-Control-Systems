#include <Wire.h>
#include <AccelStepper.h>
#include <Adafruit_MotorShield.h>

Adafruit_MotorShield AFMSbot(0x61); 
Adafruit_MotorShield AFMStop(0x60); 


Adafruit_StepperMotor *myStepper1 = AFMStop.getStepper(200, 1);
Adafruit_StepperMotor *myStepper2 = AFMStop.getStepper(200, 2);


Adafruit_StepperMotor *myStepper3 = AFMSbot.getStepper(200, 2);


void backwardstep1() {  
  myStepper1->onestep(BACKWARD, SINGLE);
}
void forwardstep1() {  
  myStepper1->onestep(FORWARD, SINGLE);
}
// wrappers for the second motor!
void backwardstep2() {  
  myStepper2->onestep(BACKWARD, DOUBLE);
}
void forwardstep2() {  
  myStepper2->onestep(FORWARD, DOUBLE);
}
// wrappers for the third motor!
void backwardstep3() {  
  myStepper3->onestep(BACKWARD, INTERLEAVE);
}
void forwardstep3() {  
  myStepper3->onestep(FORWARD, INTERLEAVE);
}


AccelStepper stepper1(backwardstep1, forwardstep1);
AccelStepper stepper2(backwardstep2, forwardstep2);
AccelStepper stepper3(backwardstep3, forwardstep3);

void setup()
{  
  AFMSbot.begin(); 
  AFMStop.begin(); 
   
  stepper1.setMaxSpeed(100.0);
  stepper1.setAcceleration(100.0);
  stepper1.moveTo(24);
    
  stepper2.setMaxSpeed(200.0);
  stepper2.setAcceleration(100.0);
  stepper2.moveTo(50000);

  stepper3.setMaxSpeed(300.0);
  stepper3.setAcceleration(100.0);
  stepper3.moveTo(1000000);
}

void loop()
{
    
    if (stepper1.distanceToGo() == 0)
  stepper1.moveTo(-stepper1.currentPosition());

    if (stepper2.distanceToGo() == 0)
  stepper2.moveTo(-stepper2.currentPosition());

    if (stepper3.distanceToGo() == 0)
  stepper3.moveTo(-stepper3.currentPosition());

    stepper1.run();
    stepper2.run();
    stepper3.run();
}

