/**
 * estape11 2024
 */


// Runs once at power-on
void setup() {
  pinMode(LED_PIN, OUTPUT); // Tells the microcontroller how the pin is going to be used
}

// Runs indefitelely until power-off
void loop() {
  delay(1000);
  digitalWrite(LED_PIN, LOW); // Sets a HIGH (5V) signal in the pin
  delay(1000);
  digitalWrite(LED_PIN, HIGH); // Sets a LOW (0V/GND) signal in the pin
}
