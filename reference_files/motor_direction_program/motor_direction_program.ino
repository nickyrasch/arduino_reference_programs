                                                    //HBRIDGE MOTOR CONTROL

const int EN=9;                                     // Half Bridge 1 enable
const int MC1=3;                                    // Motor on control 1
const int MC2=2;                                    // Motor on control 2
const int POT=0;                                    // POT on analog pin 0

int val = 0;                                        // For storing the reading from the POT
int velocity = 0;                                   // For storing the desired velocity (from 0-255)

void setup(){
  pinMode(EN, OUTPUT);
  pinMode(MC1, OUTPUT);
  pinMode(MC2, OUTPUT);
  brake();                                          //Initialize with motor stopped
}

void loop() {
  val = analogRead(POT);

  if (val > 562) {                                  //Go forward
    velocity = map(val, 563, 1023, 0, 255);
    forward(velocity);
  }

  else if (val < 462) {                             //Go backward
    velocity = map(val, 461, 0, 0, 255);
    reverse(velocity);
  }

  else {                                            //Brake
    brake();
  }
}

void forward (int rate) {                           //Motor goes forward at given rate (from 0-255)
  digitalWrite(EN, LOW);
  digitalWrite(MC1, HIGH);
  digitalWrite(MC2, LOW);
  analogWrite(EN, rate);
}

void reverse (int rate) {                           //Motor goes backward at given rate (from 0-255
  digitalWrite(EN, LOW);
  digitalWrite(MC1, LOW);
  digitalWrite(MC2, HIGH);
  analogWrite(EN, rate);
}

void brake () {                                     //Stops Motor
  digitalWrite(EN, LOW);
  digitalWrite(MC1, LOW);
  digitalWrite(MC2, LOW);
  analogWrite(EN, HIGH);
}
