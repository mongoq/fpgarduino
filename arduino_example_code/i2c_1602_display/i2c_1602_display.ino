//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1

// https://forum.arduino.cc/index.php?topic=448155.0

//#include <SoftwareWire.h>
//SoftwareWire myWire(1, 2);

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  }


void loop()
{
  lcd.backlight();
  //lcd.setCursor(3,0);
  lcd.print("Hello, world!");
//  lcd.setCursor(2,1);
//  lcd.print("Ywrobot Arduino!");
//  lcd.setCursor(0,2);
//  lcd.print("Arduino LCM IIC 2004");
//  lcd.setCursor(2,3);
//  lcd.print("Power By Ec-yuan!");
}
