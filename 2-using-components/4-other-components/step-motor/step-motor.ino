/**
 * estape11 2024
 */

#include <Stepper.h>

#define IN1 8
#define IN3 10
#define IN2 9
#define IN4 11

// Defines the number of steps per rotation
const int stepsPerRevolution = 2038;

// Creates an instance of stepper class
Stepper stepperMotor = Stepper(stepsPerRevolution, IN1, IN3, IN2, IN4);

void setup() {
    // Nothing to do (Stepper Library sets pins as outputs)
}

void loop() {
	// Rotate CW slowly at 5 RPM
	stepperMotor.setSpeed(5);
	stepperMotor.step(stepsPerRevolution);
	delay(1000);
	
	// Rotate CCW quickly at 10 RPM
	stepperMotor.setSpeed(10);
	stepperMotor.step(-stepsPerRevolution);
	delay(1000);
}
