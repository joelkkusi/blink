int ledPinGreen = 25;

void setup() {
  pinMode(ledPinGreen, OUTPUT);
}

void loop() {
  digitalWrite(ledPinGreen, HIGH);
  delay(1000);
  digitalWrite(ledPinGreen, LOW);
  delay(1000);
}
