const int knockSensorPin = A0;  // Pin connected to the knock sensor
const int ledPin = 13;  // Pin connected to the LED
const int knockThreshold = 100;  // Adjust this threshold value as needed

void setup() {
  Serial.begin(9600);  // Initialize serial communication for debugging
  pinMode(knockSensorPin, INPUT);  // Set the knock sensor pin as input
  pinMode(ledPin, OUTPUT);  // Set the LED pin as output
}

void loop() {
  int sensorValue = analogRead(knockSensorPin);  // Read the sensor value
  Serial.print("Knock Sensor Value: ");  // Print label
  Serial.println(sensorValue);  // Print the sensor value

  if (sensorValue > knockThreshold) {  // Check if the sensor value exceeds the threshold
    digitalWrite(ledPin, HIGH);  // Turn on the LED
    delay(500);  // Keep the LED on for 500 milliseconds
  } else {
    digitalWrite(ledPin, LOW);  // Turn off the LED
  }

  delay(100);  // Small delay before the next reading
}
