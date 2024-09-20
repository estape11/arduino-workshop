/**
 * estape11 2024
 */

void setup() {
  Serial.begin(9600);
}

void loop() {
  // read the input on analog pin A0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(10);  // 10 ms delay in between reads
}
