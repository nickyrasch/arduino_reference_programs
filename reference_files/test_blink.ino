                                       // TEST BLINK

int blink = 13;

void setup() {
  pinMode(blink, OUTPUT);              // Initialize digital pin 13 as an output.
}

void loop() {
  digitalWrite(blink, HIGH);           // Turn the LED on (HIGH is the voltage level)
  delay(150);                          // Wait for a second
  digitalWrite(blink, LOW);            // Turn the LED off by making the voltage LOW
  delay(700);                          // Wait for a second
}
