#include <LiquidCrystal.h>  
 LiquidCrystal lcd(12, 10, 5, 4, 3, 2);   


int t1 = 1;

int randint1 = 0;
int randint2 = 0;
int randint3 = 0;
int randint4 = 0;
int randint5 = 0;
int mode = 0;

int count = 0;
int bch = 0;
int swch = 0;

 void setup()
 { 
     lcd.begin(16, 2);
     Serial.begin(9600);
     pinMode(7,OUTPUT);
     pinMode(8,OUTPUT);
     pinMode(9,OUTPUT);
     pinMode(6,OUTPUT);
     pinMode(13,INPUT);
     pinMode(11,INPUT);
  }  
     void loop()
 {  



  randint1 = random(0,2);
  randint2 = random(0,2);

  if (mode == 0){
    while (t1 == 1){
      randint3 = random(0,25);
      lcd.setCursor(count,0);
      lcd.print(randint1);
      lcd.setCursor(count,1);
      lcd.print(randint2);
      randint1 = random(0,2);
      randint2 = random(0,2);

      count = count + 1;
      if (count == 16){
        if (randint3 == 1){
          lcd.setCursor(random(0,12),random(0,2));
          lcd.print(" Simp ");
        }
        delay(1000);
        count = 0;
        break;
      }
      
      
    }
  }
  

}
