#include <Adafruit_SSD1306.h>
#include <Arduino.h>

#include<Fonts/Org_01.h>

void loadWaitingScreen(Adafruit_SSD1306* display, uint16_t color,
                      uint16_t bgColor, uint8_t inputNo) {
  display->clearDisplay();
  display->fillScreen(bgColor);

  display->setFont(&Org_01);
  display->setCursor(10, 30);
  display->setTextWrap(true);
  display->setTextSize(1);
  display->setTextColor(color);

  display->println("Reading input for");
  char str[32];
  display->setCursor(50, display->getCursorY());
  sprintf(str, "button %d...", inputNo);
  display->println(str);
  display->display();
}

void loadTestScreen(Adafruit_SSD1306* display, uint16_t color,
                      uint16_t bgColor, uint8_t inputNo,  int protocol, uint16_t address, uint16_t command) {
  display->clearDisplay();
  display->fillScreen(bgColor);

  display->setFont(&Org_01);
  display->setCursor(10, 10);
  display->setTextWrap(true);
  display->setTextSize(1);
  display->setTextColor(color);

  display->println("Button: 1");
  display->setCursor(10, display->getCursorY());
  int16_t cy = display->getCursorY();
  display->drawLine(0, cy, 128,cy, color);
  display->setCursor(10, cy+10);

  char str[128];
  sprintf(str, "Protocol: %d",protocol);
  display->println(str);
  display->setCursor(10, display->getCursorY());

  sprintf(str, "Address: %X", address);
  display->println(str);
  display->setCursor(10, display->getCursorY());

  sprintf(str, "Command: %X", command);
  display->println(str);

  display->display();
}






