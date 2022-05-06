#include <Arduino.h>

#include "melody.h"

using namespace melody;

void melody::intro(uint8_t pin) {
  tone(pin, 2049, 201.6125);
  delay(201.6125);
  tone(pin, 2029, 201.6125);
  delay(201.6125);
  tone(pin, 1961, 201.6125);
  delay(201.6125);
  tone(pin, 1864, 201.6125);
  delay(201.6125);
  tone(pin, 2140, 201.6125);
  delay(201.6125);
  tone(pin, 1946, 201.6125);
  delay(201.6125);
  tone(pin, 1895, 201.6125);
  delay(201.6125);
  tone(pin, 2091, 201.6125);
  delay(201.6125);
  tone(pin, 1946, 201.6125);
  delay(201.6125);
  tone(pin, 1961, 201.6125);
  delay(201.6125);
  tone(pin, 1946, 201.6125);
  delay(201.6125);
  tone(pin, 1961, 201.6125);
  delay(201.6125);
  tone(pin, 1946, 201.6125);
  delay(201.6125);
  tone(pin, 1961, 201.6125);
  delay(201.6125);
}
