/**
 * estape11 2024
 */

#define A_SEGMENT_PIN 7
#define B_SEGMENT_PIN 6
#define C_SEGMENT_PIN 5
#define D_SEGMENT_PIN 11
#define E_SEGMENT_PIN 10
#define F_SEGMENT_PIN 8
#define G_SEGMENT_PIN 9
#define DT_SEGMENT_PIN 4

void displayOne(void) {
  digitalWrite(B_SEGMENT_PIN, HIGH);
  digitalWrite(C_SEGMENT_PIN, HIGH);
} 

void displayTwo(void) {
  digitalWrite(A_SEGMENT_PIN, HIGH);
  digitalWrite(B_SEGMENT_PIN, HIGH);

  digitalWrite(G_SEGMENT_PIN, HIGH);
  digitalWrite(E_SEGMENT_PIN, HIGH);
  digitalWrite(D_SEGMENT_PIN, HIGH);
}

void displayThree(void) { 
  digitalWrite(A_SEGMENT_PIN, HIGH);

  digitalWrite(B_SEGMENT_PIN, HIGH);

  digitalWrite(C_SEGMENT_PIN, HIGH);
  digitalWrite(D_SEGMENT_PIN, HIGH);

  digitalWrite(G_SEGMENT_PIN, HIGH);
} 

void displayFour(void) {
  digitalWrite(F_SEGMENT_PIN, HIGH);
  digitalWrite(B_SEGMENT_PIN, HIGH);
  digitalWrite(G_SEGMENT_PIN, HIGH);

  digitalWrite(C_SEGMENT_PIN, HIGH);  
}

void displayFive(void) { 
  digitalWrite(A_SEGMENT_PIN, HIGH);
  digitalWrite(F_SEGMENT_PIN, HIGH);
  digitalWrite(G_SEGMENT_PIN, HIGH);

  digitalWrite(C_SEGMENT_PIN, HIGH);
  digitalWrite(D_SEGMENT_PIN, HIGH);
} 

void displaySix(void) { 
  digitalWrite(A_SEGMENT_PIN, HIGH);
  digitalWrite(F_SEGMENT_PIN, HIGH);

  digitalWrite(G_SEGMENT_PIN, HIGH);
  digitalWrite(C_SEGMENT_PIN, HIGH);
  digitalWrite(D_SEGMENT_PIN, HIGH);
  
  digitalWrite(E_SEGMENT_PIN, HIGH);  
} 

void displaySeven(void) { 
  digitalWrite(A_SEGMENT_PIN, HIGH);
  digitalWrite(B_SEGMENT_PIN, HIGH);
  digitalWrite(C_SEGMENT_PIN, HIGH);
}

void displayEight(void) { 
  digitalWrite(A_SEGMENT_PIN, HIGH);

  digitalWrite(B_SEGMENT_PIN, HIGH);
  digitalWrite(G_SEGMENT_PIN, HIGH);
  digitalWrite(C_SEGMENT_PIN, HIGH);

  digitalWrite(D_SEGMENT_PIN, HIGH);  
  digitalWrite(E_SEGMENT_PIN, HIGH);  
  digitalWrite(F_SEGMENT_PIN, HIGH);
}

void displayNine(void) { 
  digitalWrite(A_SEGMENT_PIN, HIGH);
  digitalWrite(B_SEGMENT_PIN, HIGH);
  digitalWrite(G_SEGMENT_PIN, HIGH);

  digitalWrite(C_SEGMENT_PIN, HIGH);
  digitalWrite(D_SEGMENT_PIN, HIGH);  
  digitalWrite(F_SEGMENT_PIN, HIGH);
}

void displayZero(void) { 
  digitalWrite(A_SEGMENT_PIN, HIGH);
  digitalWrite(B_SEGMENT_PIN, HIGH);

  digitalWrite(C_SEGMENT_PIN, HIGH);
  digitalWrite(D_SEGMENT_PIN, HIGH);  
  digitalWrite(E_SEGMENT_PIN, HIGH);
  
  digitalWrite(F_SEGMENT_PIN, HIGH);  
}

void clearDisplay(void) { 
  digitalWrite(A_SEGMENT_PIN, LOW);
  digitalWrite(B_SEGMENT_PIN, LOW);

  digitalWrite(G_SEGMENT_PIN, LOW);
  digitalWrite(C_SEGMENT_PIN, LOW);
  digitalWrite(D_SEGMENT_PIN, LOW);  

  digitalWrite(E_SEGMENT_PIN, LOW);  
  digitalWrite(F_SEGMENT_PIN, LOW);  
}

void setup() {
  pinMode(A_SEGMENT_PIN, OUTPUT);
  pinMode(B_SEGMENT_PIN, OUTPUT);
  pinMode(C_SEGMENT_PIN, OUTPUT);
  pinMode(D_SEGMENT_PIN, OUTPUT);
  pinMode(E_SEGMENT_PIN, OUTPUT);
  pinMode(F_SEGMENT_PIN, OUTPUT);
  pinMode(G_SEGMENT_PIN, OUTPUT);
  pinMode(DT_SEGMENT_PIN, OUTPUT);
} 

void loop() {
  clearDisplay();

  displayZero(); 
  delay(2000); 
  clearDisplay();

  displayOne(); 
  delay(2000); 
  clearDisplay();
  
  displayTwo();
  delay(2000); 
  clearDisplay();

  displayThree(); 
  delay(2000);
  clearDisplay();

  displayFour(); 
  delay(2000);
  clearDisplay(); 

  displayFive(); 
  delay(2000);
  clearDisplay();
  
  displaySix(); 
  delay(2000);
  clearDisplay(); 

  displaySeven(); 
  delay(2000); 
  clearDisplay();
  
  displayEight();
  delay(2000); 
  clearDisplay();

  displayNine();
  delay(2000);
}