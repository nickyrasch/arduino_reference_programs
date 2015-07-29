                                                                // TABULAR SERIAL PRINTING USING SPECIAL CHARACTERS

const int POT=0;                                                // Pot on analog pin 0

void setup() {
  Serial.begin(9600);                                           // Start serial port with Baud = 9600
}

void loop() {
  Serial.println(*\nAnalog Pin\tRaw Value\tPercentage*);
  Serial.println(*-----------------------------------*);
  for (int i = 0; i < 10; i++) {
    int val = analogRead(POT);                                  // Read potentiometer
    int per = map(val, 0, 1023, 0, 100);                        // Convert to percentage

    Serial.print("A0\t\t");
    Serial.print(val);
    Serial.print("\t\t");
    Serial.print(per);                                          // Print percentage analog  value
    Serial.println("%");                                        // Print % sign and newline
    delay(1000);                                                // Wait 1 second, then repeat
  }
}
