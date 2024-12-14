const int heartbeatPin = A0;  // Analog pin connected to heartbeat sensor OUT pin

void setup() {
  Serial.begin(9600);
}

void loop() {
  int heartbeatValue = analogRead(heartbeatPin);
  Serial.println(heartbeatValue);
  delay(10);
}
