#include <Arduino.h>

#include "melody.h"
#include "pitch.h"

using namespace melody;

void melody::intro(uint8_t pin, int freqMultiplier, unsigned long delayDuration) {
  tone(pin, NOTE_F5 * freqMultiplier);
  delay(delayDuration);
  tone(pin, NOTE_E5 * freqMultiplier);
  delay(delayDuration);
  tone(pin, NOTE_C5 * freqMultiplier);
  delay(delayDuration);
  tone(pin, NOTE_E4 * freqMultiplier);
  delay(delayDuration);
  tone(pin, NOTE_A5 * freqMultiplier);
  delay(delayDuration);
  tone(pin, NOTE_B4 * freqMultiplier);
  delay(delayDuration);
  tone(pin, NOTE_G4 * freqMultiplier);
  delay(delayDuration);
  tone(pin, NOTE_G5 * freqMultiplier);
  delay(delayDuration);
  tone(pin, NOTE_B4 * freqMultiplier);
  delay(delayDuration);
  tone(pin, NOTE_C5 * freqMultiplier);
  delay(delayDuration);
  noTone(pin);
}
