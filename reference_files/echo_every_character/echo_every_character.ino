                                    // ECHO EVERY CHARACTER

char data;                          // Holds incoming character

void setup() {
  Serial.begin(9600);               // Serial Port at 9600 baud
}

void loop() {
  if (Serial.available() > 0 {      // Only print when data is received
    data = Serial.read();           // Read byte of data
    Serial.print(data);             // Print byte of data
  }
}
