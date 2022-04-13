int count = 0;
int b1 = 0;

void setup() {
 Serial.begin(115200);
 Serial.setTimeout(1);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(3,INPUT);

}

void loop() {
  
  b1 = digitalRead(3);
  while (!Serial.available()){
    b1 = digitalRead(3);
    if (b1 == 0){
      break;
  }
  }
  if (Serial.available()){
    b1 = Serial.readString().toInt();
  }

  if (b1 == 0){
    if (count == 0){
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      count = 1;
    }
    else if (count == 1){
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      count = 0;
    }
    delay(1000);
  }

}
