void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);
  if (sensorValue > 1024 / 4) {
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }
  Serial.println(sensorValue);
  Serial.println(2 * 1024 / 4);
  Serial.println();
  if (sensorValue > 2 * 1024 / 4) {
    digitalWrite(6, HIGH);
  } else {
    digitalWrite(6, LOW);
  }
  if (sensorValue > 3 * 1024 / 4) {
    digitalWrite(9, HIGH);
  } else {
    digitalWrite(9, LOW);
  }
}
