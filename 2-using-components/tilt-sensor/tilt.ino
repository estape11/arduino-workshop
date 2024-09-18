/**
 * estape11 2024
 */

#define TILT_PIN 2

int readRalue = 0;

void setup() {
  Serial.begin(9600); // initializes the serial console
  pinMode(TILT_PIN, INPUT);   // initializes digital pin 2 as input
}

void loop() {
  readRalue = digitalRead(TILT_PIN); // reads the value at a digital input
  Serial.println(readRalue);
  delay(5*1000); // every 5 seconds
}