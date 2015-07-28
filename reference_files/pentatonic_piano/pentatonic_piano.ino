                                        // PENTATONIC PIANO ~ C D E G A

#define NOTE_C 262                      // Hz
#define NOTE_D 294                      // Hz
#define NOTE_E 330                      // Hz
#define NOTE_G 392                      // Hz
#define NOTE_A 440                      // Hz

const int SPEAKER=9;                    // Speaker on pin 9


const int BUTTON_C=7;                   // Button pin
const int BUTTON_D=6;                   // Button pin
const int BUTTON_E=5;                   // Button pin
const int BUTTON_G=4;                   // Button pin
const int BUTTON_A=3;                   // Button pin

void setup() {
                                        // No setup ~ Tone function sets outputs
}

void loop() {
  while(digitalRead(BUTTON_C))
    tone(SPEAKER, NOTE_C);
  while(digitalRead(BUTTON_D))
    tone(SPEAKER, NOTE_D);
  while(digitalRead(BUTTON_E))
    tone(SPEAKER, NOTE_E);
  while(digitalRead(BUTTON_G))
    tone(SPEAKER, NOTE_G);
  while(digitalRead(BUTTON_A))
    tone(SPEAKER, NOTE_A);

  noTone(SPEAKER);                      // Stop playing if all buttons have been released
}
