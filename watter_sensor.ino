#include <LiquidCrystal.h> 

long wlvl = 0;

int xval = 0;
int yval = 0;

int Contrast=20;
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);   

 void setup()
 { 
     Serial.begin(9600);
     lcd.begin(16, 2);
  }  
     void loop()
 {  
  Serial.print("hi");
   wlvl = analogRead(A2);
   xval = analogRead(A1);
   yval = analogRead(A0);
   Serial.print("wlvl : ");
   Serial.println(wlvl);
   Serial.print("xval : ");
   Serial.println(xval);
   Serial.print("yval : ");
   Serial.println(yval);
   lcd.setCursor(0, 0);
   lcd.print("wlvl ");
   lcd.print(wlvl);
   lcd.print("       ");
  
  lcd.setCursor(0, 1);
   lcd.print("J.co");
}
