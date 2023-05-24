int ledPin = 13;
char receivedChar;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    receivedChar = Serial.read();
    if (receivedChar == 'a') {
      digitalWrite(ledPin, HIGH);
      delay(1000);
      digitalWrite(ledPin, LOW);
      delay(1000);
    }
  }
}
