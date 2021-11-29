
#include<LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd1(0x26,16,2);//adress eka ,peeli ganana.theera ganana

void setup() {
 

}

void loop() {
   lcd1.init();
   lcd1.backlight();
   lcd1.setCursor(3,0);
   lcd1.print("HRTE PROJECTS");
  
  
}
