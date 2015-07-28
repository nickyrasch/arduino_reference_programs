                                        // HEARTBEAT

int heartbeat = 13;                     // Initialize digital pin 13 as an output.

void setup() {
  pinMode(heartbeat, OUTPUT);
}

void loop() {
  digitalWrite(heartbeat, HIGH);        // turn the LED on (HIGH is the voltage level)
  delay(150);                           // wait for a second
  digitalWrite(heartbeat, LOW);         // turn the LED off by making the voltage LOW
  delay(700);                           // wait for a second
}