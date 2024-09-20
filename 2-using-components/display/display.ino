/**
 * estape11 2024
 * This sketch prints "hello, world!" to the LCD and seconds since reset.
 */

#include <LiquidCrystal.h>

#define RS_PIN 12
#define EN_PIN 11
#define D4_PIN 5
#define D5_PIN 4
#define D6_PIN 3
#define D7_PIN 2

// initialize the library by associating any needed LCD interface pin
LiquidCrystal lcd(RS_PIN, EN_PIN, D4_PIN, D5_PIN, D6_PIN, D7_PIN);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);
}