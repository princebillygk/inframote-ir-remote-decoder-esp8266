/**!
 * @file main.cpp
 * This program will be deployed to a arduino to decode IR Remote signal from IR
 * Remote
 * @author princebillygk (Prince Billy Graham Karmoker)
 */

#include <Adafruit_SSD1306.h>
#include <Arduino.h>
#include <SPI.h>
#include <ViewManager.hpp>
#include <Wire.h>


#include <IRHelper.h>
#include <IRrecv.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>
#include <IRutils.h>


#include "melody.h"
#include "screen.h"
#include "splash.h"

// OLED Specifications ---
#define OLED_ADDR 0x3C
#define OLED_RST_PIN -1
#define OLED_W 128
#define OLED_H 64

// Display Specification ---
#define BG_COLOR 0
#define CONTENT_COLOR 1

// Piezo Buzzer Specification
#define PIEZO_PIN D5

// IR Specification
#define IR_RECEIVE_PIN D6
#define IR_SEND_PIN D7

// Buttons
#define KEYPAD_PIN A0
#define SERIAL_MONITOR_BAUD_RATE 74880

// Initializations ---
ViewManager viewManager(OLED_RST_PIN, OLED_ADDR, CONTENT_COLOR, BG_COLOR);
IRrecv irrecv(IR_RECEIVE_PIN);
IRsend irsend(IR_SEND_PIN);
decode_results results;

int getKeypadInput() {
  int keypadInput = analogRead(KEYPAD_PIN);
  if (keypadInput >= 910 && keypadInput <= 915) {
    return 1;
  } else if (keypadInput >= 539 && keypadInput <= 543) {
    return 2;
  } else if (keypadInput >= 100 && keypadInput <= 105) {
    return 3;
  } else if (keypadInput >= 1023 && keypadInput <= 1024) {
    return 4;
  }
  return 0;
}

// void setup() {
//   Serial.begin(SERIAL_MONITOR_BAUD_RATE);
//   // viewManager.home();
//   viewManager.wait("Waiting for IR Signal\nInput for Button 30");
// }

// void loop() {
//   delay(1000);
// }

void setup() {
  // pin setup
  pinMode(IR_RECEIVE_PIN, INPUT);
  pinMode(PIEZO_PIN, OUTPUT);

  // Serial
  Serial.begin(74880);

  // IR modules
  irsend.begin();
  irrecv.enableIRIn();
}

void loop() {
  if (irrecv.decode(&results)) {
    if (results.decode_type == UNKNOWN) {
      Serial.println("Unknown Protocol");
      Serial.printf("Address %X\n", results.address);
      Serial.printf("Command %X\n", results.command);
      Serial.println(results.value);
      Serial.println(results.bits);
    } else {
      Serial.printf("Protocol %s\n", decodeTypeStr(results.decode_type));
      viewManager.singleOutput(decodeTypeStr(results.decode_type),
                                results.address, results.command,
                                results.value);
      Serial.printf("Address %X\n", results.address);
      Serial.printf("Command %X\n", results.command);
      serialPrintUint64(results.value, HEX);
      Serial.println("\n");
    }
    irrecv.resume();
    delay(1000);
    // irsend.sendNEC(0x00FFE01FUL);
    // delay(500);
  }
}
