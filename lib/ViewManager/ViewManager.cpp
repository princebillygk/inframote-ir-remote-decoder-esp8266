#include <Adafruit_SSD1306.h>
#include <Fonts/Org_01.h>
#include <Fonts/Picopixel.h>

#include <IRutils.h>
#include <ViewManager.hpp>


ViewManager::ViewManager(int8_t oledRstPin, uint8_t oledI2cAddr,
                         uint16_t contentColor, uint16_t backgroundColor)
    : contentColor(contentColor), backgroundColor(backgroundColor) {

  display = Adafruit_SSD1306(oledWidth, oledHeight, &Wire, oledRstPin);

  // begining display
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("Error: failed to communicate with SSD1306 Display");
    while (true) {
      delay(1000);
    }
  }
}

void ViewManager::clear() { ViewManager::clear(&display, backgroundColor); }

void ViewManager::clear(Adafruit_SSD1306 *display, uint16_t fillColor) {
  display->clearDisplay();
  display->fillScreen(fillColor);
}

void ViewManager::home() {
  ViewManager::home(&display, contentColor, backgroundColor);
}
void ViewManager::home(uint16_t contentColor, uint16_t backgroundColor) {
  ViewManager::home(&display, contentColor, backgroundColor);
}

void ViewManager::home(Adafruit_SSD1306 *display, uint16_t contentColor,
                       uint16_t backgroundColor) {
  display->clearDisplay();
  display->setTextColor(contentColor);
  display->fillScreen(backgroundColor);

  display->setCursor(27, 25);
  display->setFont(&Picopixel);
  display->setTextSize(2);
  display->print("INFRAMOTE");

  display->setCursor(6, 60);
  display->setFont(&Org_01);
  display->setTextSize(1);
  display->print("About Help Recall Start");
  display->display();
}

void ViewManager::wait(char *msg) {
  ViewManager::wait(&display, contentColor, backgroundColor, msg);
}
void ViewManager::wait(uint16_t contentColor, uint16_t backgroundColor,
                       char *msg) {
  ViewManager::wait(&display, contentColor, backgroundColor, msg);
}

void ViewManager::wait(Adafruit_SSD1306 *display, uint16_t color,
                       uint16_t bgColor, char *msg) {
  display->clearDisplay();
  display->fillScreen(bgColor);

  display->setFont(&Org_01);
  display->setTextWrap(true);
  display->setTextSize(1);
  display->setTextColor(color);

  display->setCursor(0, 6);
  display->print(msg);
  display->println("...");

  display->display();
}

void ViewManager::singleOutput(char *decodeType, uint32_t addr, uint32_t cmd,
                               uint64_t val) {
  ViewManager::singleOutput(&display, contentColor, backgroundColor, decodeType,
                            addr, cmd, val);
}
void ViewManager::singleOutput(uint16_t contentColor, uint16_t backgroundColor,
                               char *decodeType, uint32_t addr, uint32_t cmd,
                               uint64_t val) {
  ViewManager::singleOutput(&display, contentColor, backgroundColor, decodeType,
                            addr, cmd, val);
}

void ViewManager::singleOutput(Adafruit_SSD1306 *display, uint16_t contentColor,
                               uint16_t backgroundColor, char *decodeType,
                               uint32_t addr, uint32_t cmd, uint64_t val) {
  ViewManager::clear(display, backgroundColor);

  display->setFont(&Org_01);
  display->setCursor(10, 10);
  display->setTextWrap(true);
  display->setTextSize(1);
  display->setTextColor(contentColor);

  display->println("Button: 1");
  display->setCursor(10, display->getCursorY());
  int16_t cy = display->getCursorY();
  display->drawLine(0, cy, 128, cy, contentColor);
  display->setCursor(10, cy + 10);

  char str[128];
  sprintf(str, "Protocol: %s", decodeType);
  display->println(str);
  display->setCursor(10, display->getCursorY());

  sprintf(str, "Address: %X", addr);
  display->println(str);
  display->setCursor(10, display->getCursorY());

  sprintf(str, "Command: %X", cmd);
  display->println(str);
  display->setCursor(10, display->getCursorY());

  sprintf(str, "Value: %s\n", uint64ToString(val, HEX).c_str());
  display->println(str);

  display->display();
}