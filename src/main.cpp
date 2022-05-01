#include <Arduino.h>
#include<Wire.h>
#include<Adafruit_SSD1306.h>

// OLED Specifications
#define OLED_ADDR 0x3C
#define OLED_RST 4
#define OLED_W 128
#define OLED_H 64

// Initializations
Adafruit_SSD1306 display(OLED_W, OLED_H, &Wire, OLED_RST);

// Arduino
void setup() {
  Serial.begin(9600);
  if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR, OLED_RST)) {
    Serial.println("Failed to communicate with SSD1306 Display");
    while(1);
  }

  // test run
  display.clearDisplay();
  display.drawCircle(62, 31, 20, 1);
  display.display();
}

void loop() {
  // put your main code here, to run repeatedly:
}