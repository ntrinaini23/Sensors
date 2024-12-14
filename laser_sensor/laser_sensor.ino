const int laserPin = 2;  // Digital pin connected to laser sensor OUT pin

void setup() {
  pinMode(laserPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int laserState = digitalRead(laserPin);
  if (laserState == HIGH) {
    Serial.println("Object detected!");
  } else {
    Serial.println("No object detected.");
  }
  delay(100);
}