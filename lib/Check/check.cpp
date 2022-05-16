#include <Arduino.h>


void checkProgrammer() {
  unsigned int pin = 7;
  pinMode(pin, OUTPUT);
  while(1) {
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin, LOW);
    delay(100);
  }
}