                                      // SWEEPING DISTANCE SENSOR

#include <Servo.h>

const int SERVO=9;                    // Servo on Pin 9
const int IR=0;                       // IR Distance Sensor on Analog pin 0
const int LED1=3;                     // LED Output 1
const int LED2=5;                     // LED Output 2
const int LED3=6;                     // LED Output 3
const int LED4=11;                    // LED Output 4

Servo myServo;                        // Servo object
int dist1 = 0;                        // Quadrant 1 Distance
int dist2 = 0;                        // Quadrant 2 Distance
int dist3 = 0;                        // Quadrant 3 Distance
int dist4 = 0;                        // Quadrant 4 Distance

void setup() {
  myServo.attach(SERVO);              // Attach the servo
  pinMode(LED1, OUTPUT);              // Set LED to OUTPUT
  pinMode(LED2, OUTPUT);              // Set LED to OUTPUT
  pinMode(LED3, OUTPUT);              // Set LED to OUTPUT
  pinMode(LED4, OUTPUT);              // Set LED to OUTPUT
}

void loop() {
  dist1 = readDistance(15);           // Measure IR Distance at 15 degrees
  analogWrite(LED1, dist1);           // Adjust LED brightness
  delay(300);                         // Delay before next measurement

  dist1 = readDistance(65);           // Measure IR Distance at 65 degrees
  analogWrite(LED2, dist2);           // Adjust LED brightness
  delay(300);                         // Delay before next measurement

  dist1 = readDistance(115);          // Measure IR Distance at 115 degrees
  analogWrite(LED3, dist3);           // Adjust LED brightness
  delay(300);                         // Delay before next measurement

  dist1 = readDistance(165);          // Measure IR Distance at 165 degrees
  analogWrite(LED4, dist4);           // Adjust LED brightness
  delay(300);                         // Delay before next measurement
}

int readDistance(int pos){
  myServo.write(pos);                 // Move to given position
  delay(600);                         // Wait for servo to move
  int dist = analogRead(IR);          // Read IR sensor
  dist = map(dist, 50, 500, 0, 255);  // scale it to LED range
  dist = constrain(dist, 0, 255);     // Constrain it
  return dist;                        // Return scaled distance
}

