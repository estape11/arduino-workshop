#define BTN_PIN 2
int lastValue = 1, newValue = 1;

void setup()   {
  Serial.begin(9600);
  pinMode(BTN_PIN, INPUT_PULLUP);
}

void loop() {
  newValue = digitalRead(BTN_PIN); // reads the value sensed by the foto-resistor
  if (lastValue != newValue && newValue == 0) { // threshold value (can be modified)
    Serial.println("BTN");
    lastValue = newValue;
  } else if (lastValue != newValue && newValue == 1) {
    lastValue = newValue;
  }
}   