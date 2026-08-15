#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 (sometimes it's 0x3F)
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  lcd.init();        // Initialize the LCD
  lcd.backlight();   // Turn on the backlight

  lcd.setCursor(1, 0); // Column 0, Row 0
  lcd.print("robotics_club");

  lcd.setCursor(1, 1); // Column 0, Row 1
  lcd.print("_vitc is cool");
}

void loop()
{
  // Nothing to do here
}
