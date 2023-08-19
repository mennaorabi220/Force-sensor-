#include <LiquidCrystal_I2C.h>

 LiquidCrystal_I2C lcd(39,16,2);
int reading=0;

void setup()
{
 
  lcd.init();
 lcd.backlight();

 pinMode(A0,INPUT);
   
}

void loop()
{
  lcd.setCursor(2,0);
   lcd.print("Reading =");
    reading=analogRead(A0);
  lcd.setCursor(12,0);
  lcd.print(reading);
}