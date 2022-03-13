
char Incoming_value = 0;

int curPin = 12;

long chek = 0;

void setup() 
{
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
}
void loop()
{
  if(Serial.available() > 0)  
  {
    Incoming_value = Serial.read();
    Serial.print(Incoming_value);
    Serial.print("\n"); 
    
    if(Incoming_value == '1'){
      digitalWrite(curPin, HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
    }  
    else if(Incoming_value == '0'){
      digitalWrite(7,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(curPin, LOW);
      Serial.print("changed pin ");
      Serial.println(curPin);
      curPin = curPin - 1;
      Serial.print("new pin ");
      Serial.println(curPin);

      if (curPin == 8){
        curPin = 12;
      }
    }
  }                            
 
}                 
