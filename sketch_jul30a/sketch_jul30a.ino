// Define the pins for the ultrasonic sensor
const int trigPin = 9;
const int echoPin = 10;

// Variables for duration and distance calculation
long duration;
int distance_cm;

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);

  // Define trigPin as output and echoPin as input
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Clear the trigPin before sending a pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Send a 10 microsecond pulse to the trigPin
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echoPin, calculate duration in microseconds
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance in centimeters
  distance_cm = duration * 0.034 / 2;

  // Print the distance to the serial monitor
  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

  // Wait a short time before taking the next measurement
  delay(500);
}
