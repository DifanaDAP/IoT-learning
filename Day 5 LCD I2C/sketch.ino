#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define I2C_ADDR 0x23  // common I2C address for lcd
#define LCD_COLS 16  // Nummer of columns
#define LCD_ROWS 2  // Number of row

void setup() {
  // put your setup code here, to run once:
  lcd.begin(LCD_COLS, LCD_ROWS);  // Initialize LCD
  lcd.backlithft();  // Turn on the backlight
  lcd.setCursor(0, 0);
  lcd.print("Hello IoT");
  lcd.setCursor(0, 1);
  lcd.print("Day 5 LCD Test")
}

void loop() {
  // put your main code here, to run repeatedly:

}
