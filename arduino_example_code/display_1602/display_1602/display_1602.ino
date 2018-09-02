//Bibliothek Liquidcrystal von Arduino / Adafruit installieren, sonst kompilierts nicht
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
//LiquidCrystal lcd(28, 29, 24, 25, 26, 27);
LiquidCrystal lcd(32, 33, 34, 35, 36, 37);
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  lcd.print("Hello, world!");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);
}
