void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
}

void flash(int pin, int millisOn, int millisOff) {
  digitalWrite(pin, HIGH);
  delay(millisOn);
  digitalWrite(pin, LOW);
  delay(millisOff);
}

void fadeInOut(int pin, int millisIn, int millisOut) {
  for (int i = 0; i < 256; i++) {
    analogWrite(pin, i);
    delay(millisIn);
  }
  for (int i = 0; i < 256; i++) {
    analogWrite(pin, 256 - i);
    delay(millisOut);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  fadeInOut(5, 1, 1);
}
