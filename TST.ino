

char Incoming_value = 0;         
int b1st = 0;
int b1ch = 0;

long pval = 0;

int bon = 0;

void setup() 
{
  Serial.begin(9600);
  pinMode(10,INPUT);
  pinMode(13, OUTPUT);       
}
void loop()
{
  bon = 0;
  b1st =digitalRead(10);
  pval = analogRead(A0);
  if(Serial.available() > 0)  
  {
    bon = 1;
    Incoming_value = Serial.read();  
    Serial.print(Incoming_value);  
    Serial.print("\n");     
    if(b1ch == 0){         
      digitalWrite(13, HIGH); 
      b1ch = 1;
      bon = 1;
    }
    else if(b1ch == 1){  
      digitalWrite(13, LOW); 
      b1ch = 0;
      bon = 1;
    }
    bon = 1;
    delay(1000);
  }    


  if (b1st == 1  and bon == 0 or pval > 200 and bon == 0){
    Serial.print("bon");
    Serial.println(bon);
    if (b1ch == 0){
      digitalWrite(13,HIGH);
      Serial.print("on");
      b1ch = 1;
    }
    else if (b1ch == 1){
      digitalWrite(13,LOW);
      Serial.print("off");
      b1ch = 0;
    }
    delay(1000);
  }

  
 
}                 
