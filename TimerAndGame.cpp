#include <LiquidCrystal.h>  
int Contrast=20;
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);   

int SW = 10;

int xPosition = 0;
int yPosition = 0;
int SW_state = 0;
int mapX = 0;
int mapY = 0;

int time = 0;
String str = "";
int yes = 1;
int time2 = 0;
int b1 = 0;

int state = 1;

int dl = 0;

int s = 1000;

int m = 60000;

int h = 6;

int Xval = 0;
int Yval = 0;

int VRx = A0;
int VRy = A1;


int timer = 0;

int game = 1;

String heart = "<3";

int spawn = 0;

String enemy = "-";

int row = 6;

int eTF = 0;

int stb;
int pos = 3;

int dif = 7;

int t1 = 1;

int switchm = 0;

int mode = 0;


long dt = 100;

int point = 0;
 void setup()
 { 
    analogWrite(6,Contrast);
     lcd.begin(16, 2);
     Serial.begin(9600);
     lcd.setCursor(0,0);
     lcd.print(heart);
     pinMode(8,OUTPUT);
     
  }  
 void loop(){  
  b1 = digitalRead(7);
  switchm = digitalRead(10);

  //mode switch

  if (switchm == 1){
    if (mode == 0){
      mode = 1;
    }
    else if (mode == 1){
      mode = 0;
      state = 0;
    }
    lcd.setCursor(0,0);
    lcd.print("                       ");
    lcd.setCursor(0,1); 
    lcd.print("                       ");

    Serial.print("mode : ");
    Serial.println(mode);
    lcd.setCursor(0,0);
    lcd.print("J.co");
    delay(333);
    lcd.setCursor(5,0);
    lcd.print(".");
    delay(333);
    lcd.setCursor(5,0);
    lcd.print("..");
    delay(333);
    lcd.setCursor(5,0);
    lcd.print("...");
    delay(100);
    lcd.setCursor(0,0);
    lcd.print("              ");
    
  }
  Serial.print("mode : ");
  Serial.println(mode);

  if (mode == 0){
       Serial.print("c state ");
     Serial.println(state);
     b1 = digitalRead(7);
     time = time2;
     Serial.print("time : ");
     Serial.println(time);
     Serial.print("buttonstate");
     Serial.println(b1);
  
      Serial.print("time ");
      Serial.println(time);
      lcd.setCursor(0,1);
      lcd.print("J.co ");
      lcd.setCursor(6,1);

      
      if (time > 0 and b1 == 1){
        
        while (yes == 1){
        lcd.setCursor(0, 0);
        lcd.print("                 ");
        lcd.setCursor(0, 0);
        lcd.print(time);
        
        Serial.print(dl);
        if (state == 1 or state > 3){
           delay(1000);
           Serial.print("s");
        }
        if (state == 2){
           delay(10000);
           Serial.print("m");
           delay(10000);
           Serial.print("m");
           delay(10000);
           Serial.print("m");
           delay(10000);
           Serial.print("m");
           delay(10000);
           Serial.print("m");
           delay(10000);
           Serial.print("m");
           
        }
        if (state == 3){
           delay(360000);
           Serial.print("h");
           delay(360000);
           Serial.print("h");
           delay(360000);
           Serial.print("h");
           delay(360000);
           Serial.print("h");
           delay(360000);
           Serial.print("h");
           delay(360000);
           Serial.print("h");
           delay(360000);
           Serial.print("h");
           delay(360000);
           Serial.print("h");
           delay(360000);
           Serial.print("h");
           delay(360000);
           Serial.print("h");
        }
        delay(dl);
        time = time - 1;
        if (time == 0){
          lcd.setCursor(0, 0);
          lcd.print("                 ");
          lcd.setCursor(0, 0);
          lcd.print("time's up");
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(8,HIGH);
          delay(100);
          digitalWrite(8,LOW);
          lcd.setCursor(0, 0);
          lcd.print("                           ");
          time = 0;
          time2 = 0;
  
          break;
        
        }
       }
      
      
      }
    
      
        
      lcd.setCursor(0, 0);
      lcd.print("ct ");
  
      
      lcd.setCursor(0, 1);
      lcd.print("J.co");
    xPosition = analogRead(VRx);
    yPosition = analogRead(VRy);
    SW_state = digitalRead(SW);
    mapX = map(xPosition, 0, 1023, -512, 512);
    mapY = map(yPosition, 0, 1023, -512, 512);
    
    Serial.print("X: ");
    Serial.print(mapX);
    Serial.print(" | Y: ");
    Serial.print(mapY);
    Serial.print(" | Button: ");
    Serial.println(SW_state);
    if (mapX < -500){
      time2 = time2 + 1;
      Serial.print("time : ");
      Serial.println(time2);
      lcd.setCursor(3, 0);
      lcd.print(time2);
      delay(100);
      
    
    }
    if (mapX > 500 and time2 > 0){
      time2 = time2 - 1;
      Serial.print("time : ");
      Serial.println(time2);
      lcd.setCursor(3, 0);
      lcd.print(time2);
      delay(100);
      
    
    }
    if (mapY < -500){
      Serial.print("c state");
      Serial.println(state);
  
      if (state == 1){
        
        state = 2;
        lcd.setCursor(5, 1);
        lcd.print("m");
      
      }
      else if (state == 2){
        
        state = 3;
        lcd.setCursor(5, 1);
        lcd.print("h");
      
      }
    
    }
    if (mapY > 500){
      Serial.print("c state");
      Serial.println(state);
      
      if (state == 3){
        
        state = 2;
        lcd.setCursor(5, 1);
        lcd.print("m");    
      }
      else if (state == 2){
        
        state = 1;
        lcd.setCursor(5, 1);
        lcd.print("s"); 
      
      }
    
    }
    if (state == 1){
      
      lcd.setCursor(5, 1);
      lcd.print("s");
    
    }
    
  
    delay(100);  
  }

  // code for game 
  
  if (mode == 1){
    lcd.setCursor(14,0);
    lcd.print(point);
    if (b1 == 1){
      if (dif == 7){
        dif = 4;
      }
      else if (dif == 4){
        dif = 2;
        dt = 75;
      }
      else if (dif == 2){
        dif = 4;
        dt = 100;
      }
    }
  
    
    Xval = analogRead(A0);
    Yval = analogRead(A1);
  
    Serial.print("X value : ");
    Serial.println(Xval);
    Serial.print("Y value : ");
    Serial.println(Yval);
  
    if (Xval < 100){
  
      lcd.setCursor(0, 0);
      lcd.print(heart);
      lcd.setCursor(0,1);
      lcd.print("                    ");
      state = 0;
  
    }
    else if (Xval > 800){
      
      lcd.setCursor(0, 1);
      lcd.print(heart);
      lcd.setCursor(0,0);
      lcd.print("             ");
      state = 1;
  
    }
    spawn = random(0,dif);
  
    if (spawn == 1 and eTF == 0){
      stb = random(0,3);
      if (stb-1 == 0){
        lcd.setCursor(6,0);
        lcd.print(enemy);
        pos = 0;
      }
      else if (stb-1 == 1){
        lcd.setCursor(6,1);
        lcd.print(enemy);
        pos = 1;
      }
      eTF = 1;
    }
  
    if (eTF == 1){
      
      lcd.setCursor(row,pos);
      lcd.print(enemy);
      lcd.setCursor(row+1,pos);
      lcd.print(" ");
      row = row - 1;
      if (row == 0){
        lcd.setCursor(0,pos);
        lcd.print("    ");
        eTF = 0;
        row = 6;
        if (state == pos){
          lcd.setCursor(0,0);
  
          while (t1 == 1){
            b1 = digitalRead(7);
            switchm = digitalRead(10);
            lcd.setCursor(0,0);
            lcd.print("         ");
            lcd.setCursor(0,0);
            lcd.print("Retry");
            lcd.setCursor(0,1);
            lcd.print("press B1");
            if (switchm == 1){

              mode = 0;
              state = 0;
              lcd.setCursor(0,0);
              lcd.print("                       ");
              lcd.setCursor(0,1); 
              lcd.print("                       ");
          
              Serial.print("mode : ");
              Serial.println(mode);
              lcd.setCursor(0,0);
              lcd.print("J.co");
              delay(333);
              lcd.setCursor(5,0);
              lcd.print(".");
              delay(333);
              lcd.setCursor(5,0);
              lcd.print("..");
              delay(333);
              lcd.setCursor(5,0);
              lcd.print("...");
              delay(100);
              lcd.setCursor(0,0);
              lcd.print("              ");
              break;
            }
 
            if (b1 == 1){
              state = 0;
              lcd.setCursor(0,0);
              lcd.print("                    ");
              lcd.setCursor(0,1);
              lcd.print("                    ");
              lcd.setCursor(0,0);
              lcd.print(heart);
              delay(1000);
              point = 0;
              break;
            }
          }
  
        }
        else{
          point = point + 1;
          lcd.setCursor(14,0);
          lcd.print(point);
        
      }
      
    }
    }
    
  
    Serial.print("row : ");
    Serial.println(row);
    Serial.print("pos : ");
    Serial.println(pos);
  
    
  
    delay(dt);
  }
}
