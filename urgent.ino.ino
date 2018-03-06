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
  flash(5, 30, 500);
  flash(5, 30, 400);
  flash(5, 30, 800);
  for (int i = 0; i < 20; i++) {
    flash(5, 50, 50);
  }
  delay(1000);
  
}
