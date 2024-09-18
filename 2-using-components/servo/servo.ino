/**
 * estape11 2024
 */

#include <Servo.h>

#define SERVO_PIN 2

Servo servoMotor;  // creates servo object to control a servo
// up to twelve servo objects can be created on most boards

int position = 0;    // variable to store the servo position

void setup() {
  servoMotor.attach(SERVO_PIN);  // attaches the servo on pin 2 to the servo object
}

void loop() {
  for (position = 0; position <= 180; position += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servoMotor.write(position);              // tell servo to go to position in variable 'position'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (position = 180; position >= 0; position -= 1) { // goes from 180 degrees to 0 degrees
    servoMotor.write(position);              // tell servo to go to position in variable 'position'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}