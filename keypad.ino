#include <Keypad.h>

const int ROW_NUM = 4; //four rows
const int COLUMN_NUM = 4; //four columns

char keys[ROW_NUM][COLUMN_NUM] = {
  {'1','2','3', 'A'},
  {'4','5','6', 'B'},
  {'7','8','9', 'C'},
  {'*','0','#', 'D'}
};

byte pin_rows[ROW_NUM] = {9, 8, 7, 6}; //connect to the row pinouts of the keypad
byte pin_column[COLUMN_NUM] = {5, 4, 3, 2}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM );

int len = 0;
String kp = "";
String pasword = "";
String rpasword = ""; // youre password goes here

int pr = 0;

int lock = 0;


int b1 = 0;
int b1t = 0;


int bPIN = 10;
int rPIN = 13;
int lPIN = 12;

int bval = 0;
long pval = 0;

void setup(){
  pinMode(bPIN,INPUT);
  pinMode(rPIN,OUTPUT);
  pinMode(lPIN,INPUT);
  Serial.begin(9600);
}

void loop(){
  char key = keypad.getKey();
  


  if (key){
    kp += key;

    len = len + 1;
    Serial.println(key);
    if (len == 4){
      pasword = kp;
      Serial.println(pasword);
      if (pasword == rpasword){
        Serial.println("right");
        Serial.println("");
        pr = 1;
      }
      else{
        Serial.println("");
        pr = 0;
      }
      len = 0;
      pasword = "";
      kp = "";
    }
  }
  bval = digitalRead(bPIN);
  pval = analogRead(A0);
  lock = digitalRead(11);
  Serial.print("bval ");
  Serial.println(bval);
  Serial.print("pval ");
  Serial.println(pval);
  Serial.print(lock);

  if (lock == 1){
    pr = 0;
    Serial.print(lock);
    Serial.print("   ");
    Serial.print(digitalRead(lPIN));
    Serial.println("acses locked");
    delay(1,j000);
  }


  if (bval == 1 and pr == 1 or pval > 200 and pr == 1){
    if (b1t == 0){
      digitalWrite(rPIN,HIGH);
      b1t = 1;
      delay(1000);
    }
    else if (b1t == 1){
      digitalWrite(rPIN,LOW);
      b1t = 0;
      delay(1000);
    }
  }

}
