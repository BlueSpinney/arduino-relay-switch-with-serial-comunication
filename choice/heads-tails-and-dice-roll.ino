
#include <LiquidCrystal.h>  
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  


int mode = 0;
int xval = 0;
int yval = 0;

int LAMP[6] = {6,7,8,9,10,13};

int randint;

String modestat = "";


void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(13,OUTPUT);

}

void loop() {
  while (!Serial.available()){
    lcd.setCursor(0,0);
    lcd.print("current mode : ");
    lcd.setCursor(0,1);
    lcd.print(modestat);
    
    xval = analogRead(A0);
    yval = analogRead(A1);

    if (xval > 600){
      mode = 1;
      modestat = "coin";
    }
    if (xval < 400){
      mode = 0;
      modestat = "dice roll";
    }

    if (mode == 0 and yval < 400 or mode == 0 and yval > 600){
      randint = random(0,7);
      digitalWrite(LAMP[randint],HIGH);
      lcd.setCursor(0,0);
      lcd.print("                     ");
      lcd.setCursor(0,0);
      lcd.print("the number is : ");
      lcd.print(LAMP[randint]);
      while (!Serial.available()){
        if (xval > 600 or xval < 400){
          break;
        }
      }
      digitalWrite(LAMP[randint],LOW);
    }

    
    if (mode == 1 and yval < 400 or mode == 1 and yval > 600){
      randint = random(0,2);
      if (randint == 0){
        for (int i = 0;i < 3;i++){
          digitalWrite(LAMP[i],HIGH);
        }
      }
      else{
        for (int i = 3;i < 6;i++){
          digitalWrite(LAMP[i],HIGH);
        }
      }
      lcd.setCursor(0,0);
      lcd.print("                     ");
      lcd.setCursor(0,0);
      lcd.print("the number is : ");
      lcd.print(LAMP[randint]);
      while (!Serial.available()){
        if (xval > 600 or xval < 400){
          break;
        }
      }
      if (randint == 0){
        for (int i = 0;i < 3;i++){
          digitalWrite(LAMP[i],LOW);
        }
      }
      else{
        for (int i = 3;i < 6;i++){
          digitalWrite(LAMP[i],LOW);
        }
      }
    }
  }
  

}
