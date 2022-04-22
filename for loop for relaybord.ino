int str = 0;
int b1 = 0;
int b2 = 0;

void setup() {
  Serial.begin(115200);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);

  pinMode(11,INPUT);
  pinMode(13,INPUT);

}

void loop() {
  b1 = digitalRead(11);
  Serial.print(" state of b1 ");
  Serial.println(b1);
  

  if (b1 == 1){
    str += 1;
    if (str == 5){
      str = 1;
    }
  }
  Serial.print("strenght of tazer ");
  Serial.println(str);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  for (int i = 0; i < 2 + str; i++){
    Serial.print("writing ");
    Serial.print(i);
    Serial.println(" high ");
    digitalWrite(i,LOW);
  }
  delay(500);
  
  
}
