
int b1 = 0;
int b1t = 0;


int bPIN = 9;
int rPIN = 13;

int bval = 0;
long pval = 0;



void setup() {
  pinMode(bPIN,INPUT);
  pinMode(rPIN,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  bval = digitalRead(bPIN);
  pval = analogRead(A0);
  Serial.print("bval ");
  Serial.println(bval);
  Serial.print("pval ");
  Serial.println(pval);


  if (bval == 1 or pval > 200){
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
