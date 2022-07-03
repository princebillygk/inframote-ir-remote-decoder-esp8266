/**!
 * @file main.cpp
 * This program will be deployed to a arduino to decode IR Remote signal from IR Remote
 * @author princebillygk (Prince Billy Graham Karmoker)
 */

#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <IRremote.hpp>

#include "check.h"
#include "splash.h"
#include "screens.h"
#include "melody.h"

// OLED Specifications ---
#define OLED_ADDR 0x3C
#define OLED_RST 4
#define OLED_W 128
#define OLED_H 64

// Display Specification ---
#define BG_COLOR 0
#define CONTENT_COLOR 1

// Piezo Buzzer Specification
#define PIEZO_PIN 12

// IR Specification
#define IR_RECEIVE_PIN 7
#define IR_SEND_PIN 3

// Initializations ---
Adafruit_SSD1306 display(OLED_W, OLED_H, &Wire, OLED_RST);

void setup() {
/**
checkProgrammer();
/*/
  Serial.begin(9600);
  if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR, OLED_RST)) {
    Serial.println("Failed to communicate with SSD1306 Display");
    while (1);
  }

  loadAnimatedSplashScreen(&display, CONTENT_COLOR, BG_COLOR);
  loadWelcomeText(&display, 1, 0);
  melody::intro(PIEZO_PIN);

  // Turn off screen
  display.clearDisplay();
  display.display();
  //*/

  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);
  IrSender.begin(IR_SEND_PIN, ENABLE_LED_FEEDBACK);
}

void loop() {
  loadWaitingScreen(&display, CONTENT_COLOR, BG_COLOR, 1);
  while (true) {
        if (IrReceiver.decode()) {
        Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);
        IrReceiver.printIRResultShort(&Serial); // optional use new print version
        IrReceiver.resume(); // Enable receiving of the next value
        break;
    }
  }
  delay(5000);
  loadTestScreen(
    &display,
    CONTENT_COLOR,
    BG_COLOR,
    1,
    IrReceiver.decodedIRData.protocol,
    IrReceiver.decodedIRData.address,
    IrReceiver.decodedIRData.command
  );
  while (true);
}