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
  flash(5, 50, 50);
}
