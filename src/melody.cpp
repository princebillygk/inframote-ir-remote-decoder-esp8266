#include <Arduino.h>

#include "melody.h"
#include "pitch.h"

using namespace melody;

void melody::intro(uint8_t pin) {
  unsigned long d = 250;
  tone(pin, NOTE_F5);
  delay(d);
  tone(pin, NOTE_E5);
  delay(d);
  tone(pin, NOTE_C5);
  delay(d);
  tone(pin, NOTE_E4);
  delay(d);
  tone(pin, NOTE_A5);
  delay(d);
  tone(pin, NOTE_B4);
  delay(d);
  tone(pin, NOTE_G4);
  delay(d);
  tone(pin, NOTE_G5);
  delay(d);
  tone(pin, NOTE_B4);
  delay(d);
  tone(pin, NOTE_C5);
  delay(d);
  noTone(pin);
}
