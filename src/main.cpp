/**!
 * @file main.cpp
 * This program will be deployed to a arduino to decode IR Remote signal from IR Remote
 * @author princebillygk (Prince Billy Graham Karmoker)
 */

#include <Adafruit_SSD1306.h>
#include <Arduino.h>
#include <Wire.h>

#include "splash.h"
#include "melody.h"

// OLED Specifications ---
#define OLED_ADDR 0x3C
#define OLED_RST 4
#define OLED_W 128
#define OLED_H 64

// Piezo Buzzer Specification
#define PIEZO_PIN 12

// Initializations ---
Adafruit_SSD1306 display(OLED_W, OLED_H, &Wire, OLED_RST);

void setup() {
  Serial.begin(9600);
  if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR, OLED_RST)) {
    Serial.println("Failed to communicate with SSD1306 Display");
    while (1);
  }

  loadSplashScreen(&display, 1, 0);
  melody::intro(PIEZO_PIN);

  // Turn off screen
  display.clearDisplay();
  display.display();
}

void loop() {
  // put your main code here, to run repeatedly:
}