/**
 * estape11 2024
 */

#define BTN_PIN 2

// variables will change:
int buttonState = 0;  // variable for reading the pushbutton status

void setup() {
  // initialize the pushbutton pin as an input:
  pinMode(BTN_PIN, INPUT);
  // to printout the state of the button
  Serial.begin(9600);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(BTN_PIN);

  // check if the pushbutton is pressed.
  if (buttonState == HIGH) {
    Serial.println("Button pressed"); 
  }
}
