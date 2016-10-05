int trig =8;
int echo =9;
int led =13;
 
 void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {
  digitalWrite(trig,LOW);
  digitalWrite(echo,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  unsigned long duration = pulseIn(echo, HIGH);


float distance = duration / 29.0 / 2.0;

Serial.print(distance);
Serial.println("cm");

if (distance < 10){
  digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
    }
    delay(200);

}    
