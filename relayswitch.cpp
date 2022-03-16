


int repin1 = 6;
int repin2 = 7;
int bpin = 8;

int irpin = 9;


int b1p = 0;
int b1pch = 0;

long sound = 0;

#define echoPin 2 
#define trigPin 3

long duration; 
int distance;

int b2st;
int b2ch = 0;

int tch = 0;

int rand1 = 0;
int rand2 = 0;
int rand3 = 0;
int rand4 = 0;

int dist = 0;
int randomgo = 0;

void setup() {
  pinMode(repin1,OUTPUT);
  pinMode(repin2,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);

  pinMode(10,INPUT);
  pinMode(irpin,INPUT);
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  pinMode(5,INPUT);
  Serial.begin(9600);

  Serial.begin(9600);
  pinMode(9,HIGH);
}

void loop() {
  digitalWrite(9,HIGH);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  b1p = digitalRead(11);
  Serial.println(b1p);
  Serial.print(b1pch);

  if (randomgo == 0){
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(9,LOW);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
  }
  Serial.print("random state ");
  Serial.println(randomgo);
  Serial.print("distance state ");
  Serial.println(dist);
  Serial.print("time check ");
  Serial.print(tch);

  b2st = digitalRead(5);

  if (b2st == 1){
    if (b2ch == 0){
      dist = 1;
      randomgo = 0;
      b2ch = 1;
    }
    else if (b2ch == 1){
      randomgo = 1;
      dist = 0;
      b2ch = 2;
    }
    else if (b2ch == 2){
      dist = 0;
      randomgo = 0;
      b2ch = 0;
    }
    delay(100);
  }

  if (distance < 60 and dist == 1){
    digitalWrite(13,HIGH);
    delay(25);
    if (distance < 50){
      digitalWrite(12,HIGH);
      delay(25);
      if (distance < 40){
        digitalWrite(9,HIGH);
        delay(25);
        if (distance < 30){
          digitalWrite(8,HIGH);
          delay(25);
          if (distance < 20){
            digitalWrite(7,HIGH);
            delay(25);
          }
        }
      }
    }
  }
  if (randomgo == 1 and tch == 10){
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(9,LOW);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    rand1 = random(0,2);
    rand2 = random(0,2);
    rand3 = random(0,2);
    rand4 = random(0,2);

    if (rand1 == 1){
      digitalWrite(12,HIGH);
    }
    if (rand2 == 1){
      digitalWrite(7,HIGH);
    }
    if (rand3 == 1){
      digitalWrite(8,HIGH);
    }
    if (rand4 == 1){
      digitalWrite(13,HIGH);
    }
    tch = 0;
  }


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

  delay(10);
  tch = tch + 1;

  if (tch == 11){
    tch = 0;
  }

}
