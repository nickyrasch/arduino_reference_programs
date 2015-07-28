
                                                                                // PLAYS A SONG ON A SPEAKER

#include "pitches.h"                                                            // Header file with pitch definition

const int SPEAKER=9;                                                            // Speaker pin

int notes[] = (                                                                 // Note array
  NOTE_A4, NOTE_E3, NOTE_A4, 0,
  NOTE_A4, NOTE_E3, NOTE_A4, 0,
  NOTE_E4, NOTE_D3, NOTE_C4, NOTE_B4, NOTE_A4, NOTE_B4, NOTE_C4, NOTE_D3,
  NOTE_E4, NOTE_E3, NOTE_A4, 0
);

int times[] = (                                                                 // The duration of each note (in ms) array
  250, 250, 250, 250,
  250, 250, 250, 250,
  125, 125, 125, 125, 125, 125, 125, 125,
  250, 250, 250, 250,
);

void setup() {
  for (int i = 0; i < 20; i++) {                                                // Play each note for the right duration
    tone(SPEAKER, notes[i], times[i]);
    delay(times[i]);
  }
}

void loop() {
  // Press the reset button to play again.
}




