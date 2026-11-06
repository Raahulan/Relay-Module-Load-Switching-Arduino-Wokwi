// Relay Module High Power Load Switching - Wokwi demonstration
// Original Arduino logic supplied with the project.
const int buttonPin = 2;
const int relayPin = 4;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(relayPin, OUTPUT);

  digitalWrite(relayPin, LOW);

  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(relayPin, HIGH);
    Serial.println("Relay ON");
  }
  else {
    digitalWrite(relayPin, LOW);
    Serial.println("Relay OFF");
  }

  delay(100);
}
