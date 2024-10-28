#ifndef FACES_H
#define FACES_H

#include <LiquidCrystal_I2C.h> // Library for LCD

extern LiquidCrystal_I2C* lcd; // Declare lcd as an external pointer

void lcd_init();
void helloWorld();
void faceSmiling();
void faceSad();
void faceNeutral();
void faceAngry();

#endif
