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

void loop() {
  // put your main code here, to run repeatedly:
  flash(5, 1000, 2000);
  flash(5, 400, 400);
  flash(5, 400, 400);
  flash(5, 400, 2000);
}
