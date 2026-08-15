const int RED = 9;
const int GREEN = 10;
const int BLUE = 11;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop() {
  // Fade Red
  for (int i = 0; i <= 255; i++) {
    analogWrite(RED, i);
    analogWrite(GREEN, 0);
    analogWrite(BLUE, 0);
    delay(10);
  }
  
  for (int i = 255; i >= 0; i--) {
    analogWrite(RED, i);
    delay(10);
  }

  // Fade Green
  for (int i = 0; i <= 255; i++) {
    analogWrite(RED, 0);
    analogWrite(GREEN, i);
    analogWrite(BLUE, 0);
    delay(10);
  }
  
  for (int i = 255; i >= 0; i--) {
    analogWrite(GREEN, i);
    delay(10);
  }

  // Fade Blue
  for (int i = 0; i <= 255; i++) {
    analogWrite(RED, 0);
    analogWrite(GREEN, 0);
    analogWrite(BLUE, i);
    delay(10);
  }
  
  for (int i = 255; i >= 0; i--) {
    analogWrite(BLUE, i);
    delay(10);
  }
}
