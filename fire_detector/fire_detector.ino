#include<SoftwareSerial.h>
int sensorPin = A0; // select the input pin for the LDR
int sensorValue = 0; // variable to store the value coming from the sensor
int buzzer = 13; // Output pin for Buzzer
void setup() {
// declare the ledPin and buzzer as an OUTPUT:
pinMode(buzzer,OUTPUT);
Serial.begin(9600);
}
void loop()
{
Serial.println("TechnoWizards TechieTube - Fire Detector");
sensorValue = analogRead(sensorPin);
Serial.println(sensorValue);
if (sensorValue < 100)
{
Serial.println("Fire Detected");
digitalWrite(buzzer,HIGH);
delay(250);
}
digitalWrite(buzzer,LOW);
delay(sensorValue);
}

