                                                            // Automatic Nightlight

const int RLED=9;                                           // Red LED on pin 9 (PWM)
const int LIGHT=0;                                          // Light sensor on analog pin 0
const int POT=0;                                            // Pot on analog pin 0
const int MIN_LIGHT=63;                                     // Minimum expected light value
const int MAX_LIGHT=570;                                    // Maximum expected light value
int val = 0;                                                // variable to held the analog reading


void setup() {
  Serial.begin(9600);
  pinMode(RLED, OUTPUT);                                    // Set LED pin as output
}

void loop() {
  val = analogRead(LIGHT);                                  // Read the light sensor
  val = map(val, MIN_LIGHT, MAX_LIGHT, 255, 0);             // Map the light reading
  val = constrain(val, 0, 255);                             // Constrain light value
  analogWrite(RLED, val);                                   // Control the LED

  val = analogRead(POT);
  Serial.println(val);
}
