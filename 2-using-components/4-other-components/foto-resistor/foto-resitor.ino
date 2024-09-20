/**
 * estape11 2024
 */

#define LED_PIN 11

int ldrValue;

void setup()   {
  Serial.begin(9600);
  pinMode(A3, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  ldrValue = analogRead(A3); // reads the value sensed by the foto-resistor
  Serial.println(ldrValue); // prints the read value from the foto-resistor 

  if (ldrValue <= 80) { // threshold value (can be modified)
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN,   LOW);
  }
}