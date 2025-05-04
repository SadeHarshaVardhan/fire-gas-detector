#include <Servo.h> 
// Define pins 
const int gasSensorPin = A0; // Analog pin for gas sensor 
const int lightSensorPin = A1; // Analog pin for light sensor 
const int ledPin = 13; // Digital pin for LED 
const int buzzerPin = 10; // Digital pin for buzzer 
// Bluetooth module 
char incomingByte; // Variable to store incoming Bluetooth data 
// Servo motor 
Servo servoMotor;  
const int servoPin = 9; // Digital pin for servo motor 
// Thresholds 
const int gasThreshold = 600; // Adjust this threshold based on your gas sensor 
readings 
const int lightThreshold = 200; // Adjust this threshold based on your light sensor 
readings 
void setup() { 
 Serial.begin(9600);  
  
 pinMode(gasSensorPin, INPUT);  
 pinMode(lightSensorPin, INPUT);  
 pinMode(ledPin, OUTPUT);  
6 
 pinMode(buzzerPin, OUTPUT);  
  
 servoMotor.attach(servoPin);  
 servoMotor.write(0); // Initialize the servo motor position 
} 
void loop() { 
 // Read sensor values 
 int gasValue = analogRead(gasSensorPin);  
 int lightValue = analogRead(lightSensorPin);  
  
 // Check if gas value is greater than the threshold and light is detected 
 if (gasValue > gasThreshold && lightValue > lightThreshold) { 
 digitalWrite(ledPin, HIGH); // Turn on LED 
 digitalWrite(buzzerPin, HIGH); // Turn on buzzer 
  
 // Send data via Bluetooth 
 Serial.print("Gas: ");  
 Serial.println(gasValue);  
 Serial.print("Light: ");  
 Serial.println(lightValue);  
 Serial.println("Fire Detected");  
  
7 
 rotateServo(); // Rotate the servo motor by 90 degrees once 
 } else { 
GAS AND FIRE DETECTOR VIA BLUETOOTH 
 digitalWrite(ledPin, LOW); // Turn off LED 
 digitalWrite(buzzerPin, LOW); // Turn off buzzer 
 // Send data via Bluetooth 
 Serial.print("Gas: ");  
 Serial.println(gasValue);  
 Serial.print("Light: ");  
 Serial.println(lightValue);  
 Serial.println("No Fire Detected");  
 } 
  
 // Check for incoming Bluetooth data 
 if (Serial.available() > 0) { 
 char command = Serial.read();  
 int angle;  
 if (command == 'L') { 
 // Left command received 
 angle = 0;  
 servoMotor.write(angle);  
 } else if (command == 'R') { 
8 
 // Right command received 
 angle = 90;  
 servoMotor.write(angle);  
 } 
 } 
} 
void rotateServo() { 
 servoMotor.write(90); // Rotate servo motor to 90 degrees 
 delay(2000); // Wait for 2 seconds 
 servoMotor.write(0); // Rotate back to 0 degrees
