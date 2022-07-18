#include <Adafruit_SSD1306.h>
#include <Fonts/Picopixel.h>

class Display {
    public: 
  uint16_t backgroundColor;
  uint16_t contentColor;

private:
  Adafruit_SSD1306 *display;

private:

public:
  Display(Adafruit_SSD1306 *display, uint16_t contentColor,
          uint16_t backgroundColor)
      : display(display), contentColor(contentColor),
        backgroundColor(backgroundColor) { }

    void begin() {
        if (!display->begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
            Serial.println("Failed to communicate with SSD1306 Display");
            while (true)
            ;
    }

    void home() {
        Display::home(display, contentColor, backgroundColor);
    }
    void home(uint16_t contentColor, uint16_t backgroundColor) {
        Display::home(display, contentColor, backgroundColor);
    }
    void home(Adafruit_SSD1306 *display, uint16_t contentColor,
          uint16_t backgroundColor) {
            Display::home(display, contentColor, backgroundColor);
          }
};

void Display::home(Adafruit_SSD1306 *display, uint16_t contentColor, uint16_t backgroundColor) {
        display->clearDisplay();
        display->setCursor(10, 35);
        display->setTextWrap(false);
        display->setFont(&Picopixel);
        display->setTextSize(2);
        display->setTextColor(contentColor);
        display->fillScreen(backgroundColor);
        display->print("INFRAMOTE");
        display->display();
}
