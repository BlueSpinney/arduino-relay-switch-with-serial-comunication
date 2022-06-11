#include <LiquidCrystal.h>  
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  

 int xval = 0;
 int yval = 0;
 int t = 0;
 int tim = 0;
int p = 0;
int count = 0;

int squid = 0;
 void setup()
 { 
     Serial.begin(9600);
     lcd.begin(16, 2);
     pinMode(9,OUTPUT);
     pinMode(10,OUTPUT);
     digitalWrite(9,LOW);
     lcd.setCursor(6,1);
     lcd.print("J.co");
     lcd.setCursor(0,0);
     lcd.print("::::::::::::::::::::");
     for (int i = 0;i<16;i++){
      lcd.setCursor(i,0);
      lcd.print("/");
      delay(100);
     }
     for (int i = 0;i<16;i++){
      lcd.setCursor(i,0);
      lcd.print(":");
      lcd.setCursor(i,1);
      lcd.print(":");
      delay(50);
     }
     delay(50);
     lcd.setCursor(0,0);
     lcd.print("                            ");
     lcd.setCursor(0,1);
     lcd.print("            J.co");

  }  
     void loop()
 {  
    xval = analogRead(A0);
    yval = analogRead(A1);
    p = analogRead(A2);
    Serial.print("x ");
    Serial.println(xval);
    Serial.print("y ");
    Serial.println(yval);
    Serial.print("p ");
    Serial.println(p);

    if (xval < 200){
      tim++;
      t = 0;
      delay(100);
    }
    else if(xval > 700){
      tim--;
      t = 0;
      delay(100);
    }
    else if (p > 200){
      t = 0;
      for (int i = 0;i<tim + 1;i++){
        lcd.setCursor(0,0);
        lcd.print(tim - i);
        lcd.print("                       ");
        
        delay(1000);
     
      }
      digitalWrite(9,HIGH);
      delay(2000);
      digitalWrite(9,LOW);
      delay(1000);
    }
      else{
        t++;
        if (t > 100){
          squid = 1;
        }
        else{
          squid = 0;
        }
      }

if (squid == 1){
        count = random(0,6);
        if (count == 1){
        lcd.setCursor(0,0);
        lcd.print("    ^     ^     ");
        lcd.setCursor(0,1);
        lcd.print("     _____      ");
        count = 2;
      }
      else if (count == 2){
        lcd.setCursor(0,0);
        lcd.print("    [^]  [^]    ");
        lcd.setCursor(0,1);
        lcd.print("   __________   ");        
        count = 3;
      }
      else if (count == 3 or 4 or 5){
        if (count == 3){
          lcd.setCursor(0,0);
          lcd.print("   [::]  [::]   ");
          lcd.setCursor(0,1);
          lcd.print("  ____________  ");           
        }
        if (count == 4){
          count = random(0,2);
          lcd.setCursor(0,0);
          if (count == 1){
            lcd.print("  [:: ]  [:: ]  ");
            lcd.setCursor(0,1);
            lcd.print(" ______________ "); 
          }
          else{
            lcd.print("  [ ::]  [ ::]  ");
            lcd.setCursor(0,1);
            lcd.print(" ______________ ");  
          }
        }
      }
}
    

    
    lcd.setCursor(0,0);
    lcd.print(tim + "                                     ");
    delay(100);
}
