#include<Adafruit_SSD1306.h>

#ifndef SPLASH_H
#define SPLASH_H

/*!
    @brief  Loads Inframote Splash Screen on a SSD1306 display
    @param  display
            An Adafruit_SSD1306 Instance
    @param  color
            Indicates the color of the splash screen text and objects
    @param  bgColor
            Indicates the background color of splash screen
    @note   This function will work with any kind of display using
            Adafruit_GFX library with some modification
    
*/
void loadAnimatedSplashScreen(Adafruit_SSD1306* display, uint16_t color, uint16_t bgColor);
void loadWelcomeText(Adafruit_SSD1306* display, uint16_t color, uint16_t bgColor);

#endif