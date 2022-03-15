


int repin1 = 6;
int repin2 = 7;
int bpin = 8;

int irpin = 9;


int b1p = 0;
int b1pch = 0;

void setup() {
  pinMode(repin1,OUTPUT);
  pinMode(repin2,OUTPUT);

  pinMode(10,INPUT);
  pinMode(irpin,INPUT);

  Serial.begin(9600);
  
}

void loop() {

  b1p = digitalRead(10);
  Serial.println(b1p);
  Serial.print(b1pch);

  if (b1p == 1){
    if ( b1pch == 0){
      digitalWrite(repin1,LOW);
      b1pch = 1;
    }
    else if ( b1pch == 1){
      digitalWrite(repin1,HIGH);
      b1pch = 0;
    }
    delay(1000);
  }

}
