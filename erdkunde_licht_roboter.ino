

// add ir sensor to make everything wireles


int b1 = 0;
int val = 3;

int t1 = 1;

int relay = 8;



void setup(){
  pinMode(7,INPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
  
}


void loop(){

  b1 = digitalRead(7);

  if (b1 == 1){
    digitalWrite(val,HIGH);
    delay(1000);
    while (t1 == 1){
      digitalWrite(val,HIGH);
      b1 = digitalRead(7);
      if (b1 == 1){
        digitalWrite(val,LOW);
        val = val + 1;
        delay(1000);
        break;
      }
    }
  }
 delay(100);
  
}
