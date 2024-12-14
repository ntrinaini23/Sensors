const int touchSensorPin = 2;  // Pin connected to the OUT pin of the touch sensor
const int ledPin = 13;  // Pin connected to the LED

void setup() {
  Serial.begin(9600);  // Initialize serial communication for debugging
  pinMode(touchSensorPin, INPUT);  // Set the touch sensor pin as input
  pinMode(ledPin, OUTPUT);  // Set the LED pin as output
}

void loop() {
  int sensorValue = digitalRead(touchSensorPin);  // Read the value from the touch sensor
  
  if (sensorValue == HIGH) {  // Check if the sensor value is HIGH (touch detected)
    digitalWrite(ledPin, HIGH);  // Turn on the LED
    Serial.println("Touch detected!");
  } else {
    digitalWrite(ledPin, LOW);  // Turn off the LED
    Serial.println("No touch detected.");
  }

  delay(100);  // Small delay before the next reading
}

