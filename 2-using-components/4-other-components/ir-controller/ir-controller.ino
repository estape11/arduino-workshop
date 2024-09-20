/**
 * estape11 2024
 */

#include <IRremote.h>

#define RECV_PIN 7

IRrecv irRecv(RECV_PIN);
decode_results results;

void setup(){
  Serial.begin(9600);
  irRecv.enableIRIn();
  irRecv.blink13(true);
}

void loop(){
  if (irRecv.decode(&results)){
    Serial.println(results.value, HEX);
    irRecv.resume();
  }
}