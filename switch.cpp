int on = 0;

int br = 0;
int c1 = 0;
String command = "";

void setup(){

  pinMode(9,OUTPUT);
  pinMode(3,INPUT);
  Serial.begin(9600);
  delay(1000);
}

void loop(){
  
  command = Serial.readString();


  Serial.print(command);


  
  if (command != "" and c1 == 0){
    Serial.println("acctivating");
    digitalWrite(9,HIGH);
    c1 = 1;
    
  }
  else if (command != "" and c1 == 1){
         Serial.println("closing");
         digitalWrite(9,LOW);
         c1 = 0;
    
  }

  delay(100);
  
}
