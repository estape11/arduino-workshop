#define PIN_PHOTO A0
#define PIN_BUZZ  9

#define PIN_A 4
#define PIN_B 5
#define PIN_C 8
#define PIN_D 7
#define PIN_E 6
#define PIN_F 3
#define PIN_G 2

void write_digit(int i) {
  int mask = 0x00;
    switch(i) {
        case 0:
        mask = 0x3F;
        break;
        case 1:
        mask = 0x06;
        break;
        case 2:
        // abdeg
        mask = 0x5B;
        break;
        case 3:
        mask = 0x4F;
        break;
        case 4:
        // abfg
        mask = 0x66;
        break;
        case 5:
        // acdfg
        mask = 0x6D;
        break;
        case 6:
        // cdefg
        mask = 0x7C;
        break;
        case 7:
        mask = 0x07;
        break;
        case 8:
        mask = 0x7F;
        break;
        case 9:
        mask = 0x67;
        break;
        default:
        mask = 0x00;
      }
      if (mask & 0x01) {
        digitalWrite(PIN_A, 1);
      } else {
        digitalWrite(PIN_A, 0);
      }
      if (mask & 0x02) {
        digitalWrite(PIN_B, 1);
      } else {
        digitalWrite(PIN_B, 0);
      }
      if (mask & 0x04){ 
        digitalWrite(PIN_C, 1);
      } else  {
        digitalWrite(PIN_C, 0);
      }
      if (mask & 0x08) {
        digitalWrite(PIN_D, 1);
      } else {
        digitalWrite(PIN_D, 0);
      }
      if (mask & 0x10) {
        digitalWrite(PIN_E, 1);
      } else {
        digitalWrite(PIN_E, 0);
      }
      if (mask & 0x20) {
        digitalWrite(PIN_F, 1);
      } else {
        digitalWrite(PIN_F, 0);
      }
      if (mask & 0x40) {
        digitalWrite(PIN_G, 1);
      } else {
        digitalWrite(PIN_G, 0);
      }
  }

void setup() {
  write_digit(0);
  Serial.begin(9600);
} 
enum state_t {IDLE, NOTIFYING, DRINKING};

#define DRINK_PERIOD_MS 5000
#define REFRESH_PERIOD_MS 500
#define THRESHOLD 512
int32_t wait_ms = DRINK_PERIOD_MS;
int drinks = 0;
int value;
state_t state = IDLE;

void loop() {
  delay(REFRESH_PERIOD_MS);
  Serial.println(wait_ms);
  switch (state) {
    case IDLE:
      Serial.println("IDLE");
      if (wait_ms <= 0) {
        digitalWrite(PIN_BUZZ, 255);
        state = NOTIFYING;
      } else {
        wait_ms -= REFRESH_PERIOD_MS;
      }
      break;
    case NOTIFYING:
      Serial.println("NOTIFYING");
      value = analogRead(PIN_PHOTO);
      if (value < THRESHOLD) {
        digitalWrite(PIN_BUZZ, 0);
        state = DRINKING;
      }
      break;
    case DRINKING:
      Serial.println("DRINKING");
      value = analogRead(PIN_PHOTO);
      if (value > THRESHOLD) {
        digitalWrite(PIN_BUZZ, 0);
        drinks += 1;
        drinks %= 10;
        write_digit(drinks);
        state = IDLE;
        wait_ms = DRINK_PERIOD_MS;
      }
      break;
  }
  Serial.println(analogRead(PIN_PHOTO));
}
