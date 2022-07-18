#include <Adafruit_SSD1306.h>
#include <Fonts/Org_01.h>
#include <Fonts/Picopixel.h>


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

void ViewManager::home() { home(&display, contentColor, backgroundColor); }
void ViewManager::home(uint16_t contentColor, uint16_t backgroundColor) {
  home(&display, contentColor, backgroundColor);
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
  wait(&display, contentColor, backgroundColor, msg);
}
void ViewManager::wait(uint16_t contentColor, uint16_t backgroundColor,
                       char *msg) {
  wait(&display, contentColor, backgroundColor, msg);
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
