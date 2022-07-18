/**!
 * @file main.cpp
 * This program will be deployed to a arduino to decode IR Remote signal from IR
 * Remote
 * @author princebillygk (Prince Billy Graham Karmoker)
 */

#include <Adafruit_SSD1306.h>
#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>

#include <IRHelper.h>
#include <IRrecv.h>
#include <IRsend.h>
#include <IRremoteESP8266.h>
#include <IRutils.h>

#include "melody.h"
#include "screen.h"
#include "splash.h"

// OLED Specifications ---
#define OLED_ADDR 0x3C
#define OLED_RST -1
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

// Initializations ---
Adafruit_SSD1306 display(OLED_W, OLED_H, &Wire, OLED_RST);
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

void setup() {

}

// void setup() {
//   // pin setup
//   pinMode(IR_RECEIVE_PIN, INPUT);
//   pinMode(PIEZO_PIN, OUTPUT);

//   // Serial
//   Serial.begin(74880);

//   // IR modules
//   irsend.begin();
//   irrecv.enableIRIn();

//   // Display
//   if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
//     Serial.println("Failed to communicate with SSD1306 Display");
//     while (true)
//       ;
//   }

//   // Application
//   loadAnimatedSplashScreen(&display, CONTENT_COLOR, BG_COLOR);
//   loadWelcomeText(&display, 1, 0);
//   melody::intro(PIEZO_PIN, 3);

//   display.clearDisplay();
//   display.display();

//   while (!Serial) {
//     delay(50);
//   }

//   char msg[64];
//   sprintf(msg, "IRrecvDemo is now running and waiting for IR message on Pin %d",
//           IR_RECEIVE_PIN);

//   Serial.println(IR_RECEIVE_PIN);
//   screen::showMessage(&display, CONTENT_COLOR, BG_COLOR, msg);
// }

// void loop() {
//   if (irrecv.decode(&results)) {
//     Serial.printf("Protocol %s\n", decodeTypeStr(results.decode_type));
//     Serial.printf("Address %X\n", results.address);
//     Serial.printf("Command %X\n", results.command);
//     Serial.println("\n");
//     screen::loadTestScreen(&display, CONTENT_COLOR, BG_COLOR, 1,
//                            decodeTypeStr(results.decode_type), results.address,
//                            results.command);
//     irrecv.resume();
//     delay(500);
//     irsend.sendNEC(0x00FFE01FUL);
//     delay(500);
//   }
// }
