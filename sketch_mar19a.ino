const int DIR  = 14;
const int STEP = 12;

void setup() {
  pinMode(DIR, OUTPUT);
  pinMode(STEP, OUTPUT);
  digitalWrite(DIR, LOW);
  digitalWrite(STEP, LOW);
}

void loop() {
  delay(200);
  digitalWrite(DIR, HIGH);

  for (int i=0; i<2000; i++) {
    digitalWrite(STEP, HIGH);
    delayMicroseconds(5000);
    digitalWrite(STEP, LOW);
    delayMicroseconds(5000);
  }

  delay(1000);

}
