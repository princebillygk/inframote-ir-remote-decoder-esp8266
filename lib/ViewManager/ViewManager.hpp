#ifndef VIEW_MANAGER_HPP
#define VIEW_MANAGER_HPP

#include <Adafruit_SSD1306.h>

class ViewManager {
  Adafruit_SSD1306 display;
  static int const oledWidth = 128;
  static int const oledHeight = 64;

public:
  uint16_t contentColor;
  uint16_t backgroundColor;

public:
  ViewManager(int8_t oledRstPin, uint8_t oledI2cAddr, uint16_t contentColor,
              uint16_t backgroundColor);

  void clear();
  static void clear(Adafruit_SSD1306 *display, uint16_t fillColor);

  void home();
  void home(uint16_t contentColor, uint16_t backgroundColor);
  static void home(Adafruit_SSD1306 *display, uint16_t contentColor,
            uint16_t backgroundColor);

  void wait(char *msg);
  void wait(uint16_t contentColor, uint16_t backgroundColor, char *msg);
  static void wait(Adafruit_SSD1306 *display, uint16_t contentColor,
            uint16_t backgroundColor, char *msg);

  void singleOutput(char *msg, uint32_t addr, uint32_t cmd, uint64_t val);
  void singleOutput(uint16_t contentColor, uint16_t backgroundColor, char *msg,
                    uint32_t addr, uint32_t cmd, uint64_t val);
  static void singleOutput(Adafruit_SSD1306 *display, uint16_t contentColor,
                    uint16_t backgroundColor, char *msg, uint32_t addr,
                    uint32_t cmd, uint64_t val);
};

#endif