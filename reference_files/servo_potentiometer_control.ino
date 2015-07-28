                                            // SERVO POTENTIOMETER CONTROL

#include <Servo.h>

const int SERVO=9;                          // Servo on Pin 9
const int POT=0;                            // POT on Analog pin 0

Servo myServo;
int val = 0;                                // For string the reading from POT

void setup() {
  myServo.attach(SERVO);
}

void loop() {
  val = analogRead(POT);                    // Read POT
  val = map(val, 0, 1023, 0, 179);          // Scale it to servo ranges
  myServo.write(val);                       // Sets the servo
  delay(15);                                // Waits for the servo
}
