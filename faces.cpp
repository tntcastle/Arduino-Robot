#include <Arduino.h>
#include "faces.h"

LiquidCrystal_I2C* lcd = nullptr; // Define lcd here, only once in faces.cpp

void lcd_init(){
  lcd = new LiquidCrystal_I2C(0x27, 20, 4);
  lcd->init(); // Initialize the lcd
  lcd->backlight(); // Turn on the backlight
}

void helloWorld(){
  lcd->clear();
  lcd->setCursor(0, 0);
  lcd->print("Hello world");
  delay(2000);
}
