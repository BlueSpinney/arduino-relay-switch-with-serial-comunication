#include <LiquidCrystal.h>  
 LiquidCrystal lcd(12, 11, 5, 4, 7, 2);   

int x = 0;

int xval = 0;
int yval = 0;

int b1 = 0;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(3,INPUT);
  pinMode(13,OUTPUT);
  pinMode(10,OUTPUT);

  pinMode(8,OUTPUT);
  lcd.setCursor(0, 1);
  lcd.print("J.co");
}

void loop() {
  while (!Serial.available()){
    lcd.setCursor(0, 0);
    lcd.print(x);
    lcd.print("                 ");
    Serial.println(xval);
      
    digitalWrite(13,HIGH);
    digitalWrite(10,HIGH);
    
    xval = analogRead(A0);
    yval = analogRead(A1);
  
    b1 = digitalRead(3);
  
    if (xval > 600 and x != 0){
      x--;
      delay(200);
    }
    if (xval < 400){
      x++;
      delay(200);
    }
  
    if (b1 == 1){
      for (int i = 0; i < x + 1; i++){
        Serial.println(x - i);
        delay(1000);
        lcd.setCursor(0, 0);
        lcd.print(x - i);
        lcd.print("                 ");
        if (x - i == 0){
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(13,LOW);
          digitalWrite(10,LOW);
          delay(500);
          digitalWrite(13,HIGH);
          digitalWrite(10,HIGH);
          delay(1000);
          digitalWrite(8,LOW);
          Serial.println("done");
          break;
        }
      }
    }
  }
  x = Serial.readString().toInt();
  for (int i = 0; i < x + 1; i++){
    Serial.println(x - i);
    delay(1000);
    if (x - i == 0){
      digitalWrite(8,HIGH);
      delay(100);
      digitalWrite(13,LOW);
      digitalWrite(10,LOW);
      delay(500);
      digitalWrite(13,HIGH);
      digitalWrite(10,HIGH);
      delay(100);
      digitalWrite(8,LOW);
      Serial.println("done");
      break;
    }
  }
  Serial.println("loop end");
 

}
