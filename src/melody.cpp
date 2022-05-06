#include <Arduino.h>

#include "melody.h"

using namespace melody;

void melody::intro(uint8_t pin) {
  tone(pin, 1449, 201.6125);
  delay(201.6125);
  tone(pin, 1429, 201.6125);
  delay(201.6125);
  tone(pin, 1361, 201.6125);
  delay(201.6125);
  tone(pin, 1264, 201.6125);
  delay(201.6125);
  tone(pin, 1540, 201.6125);
  delay(201.6125);
  tone(pin, 1346, 201.6125);
  delay(201.6125);
  tone(pin, 1295, 201.6125);
  delay(201.6125);
  tone(pin, 1491, 201.6125);
  delay(201.6125);
  tone(pin, 1346, 201.6125);
  delay(201.6125);
  tone(pin, 1361, 201.6125);
  delay(201.6125);
  tone(pin, 1346, 201.6125);
  delay(201.6125);
  tone(pin, 1361, 201.6125);
  delay(201.6125);
  tone(pin, 1346, 201.6125);
  delay(201.6125);
  tone(pin, 1361, 201.6125);
  delay(201.6125);
}
