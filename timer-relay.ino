
int x = 0;

int xval = 0;
int yval = 0;

int b1 = 0;

void setup() {
  Serial.begin(9600);
  pinMode(3,INPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop() {
  while (!Serial.available()){
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    
    xval = analogRead(A0);
    yval = analogRead(A1);
  
    b1 = digitalRead(3);
  
    if (xval > 600){
      x++;
    }
    if (xval < 400 and x != 0){
      x--;
    }
  
    if (b1 == 1){
      for (int i = 0; i < x; i++){
        delay(1000);
        if (x == 0){
          digitalWrite(13,LOW);
          digitalWrite(12,LOW);
          delay(500);
          digitalWrite(13,HIGH);
          digitalWrite(12,HIGH);
          break;
        }
        x--;
      }
    }
  }
  x = Serial.readString().toInt();
  for (int i = 0; i < x + 1; i++){
    Serial.println(x - i);
    delay(1000);
    if (x - i == 0){
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      delay(500);
      digitalWrite(13,HIGH);
      digitalWrite(12,HIGH);
      Serial.println("done");
      break;
    }
  }
  Serial.println("loop end");
 

}
