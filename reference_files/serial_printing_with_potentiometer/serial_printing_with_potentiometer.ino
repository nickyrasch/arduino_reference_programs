                                            // SERIAL PRINTING WITH A POTENTIOMETER

const int POT=0;                            // Pot on analog pin 0

void setup(){
  Serial.begin(9600);                       // Start serial port with baud = 9600
}

void loop(){
  int val = analogRead(POT);                 // Read potentiometer
  int per = map(val, 0, 1023, 0, 100);      // Convert to percentage
  
  Serial.print(*Analog Reading: *);
  Serial.print(val);                        // Print raw analog value
  
  Serial.print(*Percentage: *);
  Serial.print(per);                        // Print percentage analog value
  Serial.println(*%*);                      // Print % sign and newline
  
  delay(1000);                              // Wait 1 second, then repeat
}

