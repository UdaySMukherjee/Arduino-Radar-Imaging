// Includes the Servo library
#include <Servo.h>

// Defines Trig and Echo pins of the Ultrasonic Sensor
const int trigPin = 2;
const int echoPin = 3;

// Variables for the duration and the distance
long duration;
int distance;

Servo myServo; // Creates a servo object for controlling the servo motor

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600);
  myServo.attach(4); // Defines on which pin the servo motor is attached
}

void loop() {
  // Rotates the servo motor from 0 to 180 degrees
  for (int i = 0; i <= 180; i++) {
    myServo.write(i);
    delay(30);
    distance = calculateDistance(); // Calls a function for calculating the distance measured by the Ultrasonic sensor for each degree
    Serial.print(i); // Sends the current degree to the Serial Port
    Serial.print(","); // Sends additional character right next to the previous value needed later in the Processing IDE for indexing
    Serial.print(distance); // Sends the distance value to the Serial Port
    Serial.print("."); // Sends additional character right next to the previous value needed later in the Processing IDE for indexing
  }

  // Repeats the previous lines from 180 to 0 degrees
  for (int i = 180; i > 0; i--) {
    myServo.write(i);
    delay(30);
    distance = calculateDistance();
    Serial.print(i);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");
  }
}

// Function for calculating the distance measured by the Ultrasonic sensor
int calculateDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Sets the trigPin on HIGH state for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH); // Reads the echoPin, returns the sound wave travel time in microseconds
  distance = duration * 0.034 / 2;

  return distance;
}
