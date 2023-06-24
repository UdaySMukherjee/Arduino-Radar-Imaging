// Includes the Servo library
#include <Servo.h>

// Defines Trig and Echo pins of the Ultrasonic Sensors
const int trigPin1 = 2;
const int echoPin1 = 3;
const int trigPin2 = 5;
const int echoPin2 = 6;

// Variables for the durations and distances
long duration1, duration2;
int distance1, distance2;

Servo servo; // Creates a servo object for controlling the servo

void setup() {
  pinMode(trigPin1, OUTPUT); // Sets the trigPin1 as an Output
  pinMode(echoPin1, INPUT); // Sets the echoPin1 as an Input
  pinMode(trigPin2, OUTPUT); // Sets the trigPin2 as an Output
  pinMode(echoPin2, INPUT); // Sets the echoPin2 as an Input
  
  Serial.begin(9600);
  
  servo.attach(9); // Defines on which pin the servo is attached
}

void loop() {
  // Rotates the servo from 0 to 180 degrees
  for (int i = 0; i <= 180; i++) {
    servo.write(i);
    delay(30);
    distance1 = calculateDistance(trigPin1, echoPin1); // Calls a function for calculating the distance measured by ultrasonic sensor 1
    distance2 = calculateDistance(trigPin2, echoPin2); // Calls a function for calculating the distance measured by ultrasonic sensor 2
    Serial.print(i); // Sends the current degree to the Serial Port
    Serial.print(",");
    Serial.print(distance1); // Sends the distance measured by ultrasonic sensor 1 to the Serial Port
    Serial.print(",");
    Serial.print(distance2); // Sends the distance measured by ultrasonic sensor 2 to the Serial Port
    Serial.println(".");
  }

  // Repeats the previous lines from 180 to 0 degrees
  for (int i = 180; i > 0; i--) {
    servo.write(i);
    delay(30);
    distance1 = calculateDistance(trigPin1, echoPin1);
    distance2 = calculateDistance(trigPin2, echoPin2);
    Serial.print(i);
    Serial.print(",");
    Serial.print(distance1);
    Serial.print(",");
    Serial.print(distance2);
    Serial.println(".");
  }
}

// Function for calculating the distance measured by an Ultrasonic sensor
int calculateDistance(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Sets the trigPin on HIGH state for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH); // Reads the echoPin, returns the sound wave travel time in microseconds
  int distance = duration * 0.034 / 2;

  return distance;
}
