int TRIG_PIN = 2;
int ECHO_PIN = 3;
int LED_PIN = 4;

void setup() { 
  Serial.begin(9600);
  pinMode(TRIG_PIN, OUTPUT); 
  pinMode(ECHO_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}
 
void loop() 
{
  int distance = 0;  
 
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10); 
  digitalWrite(TRIG_PIN, LOW); 
  distance = pulseIn(ECHO_PIN, HIGH)/58.2;
  
//turn the LED on within 10 
  if (distance <= 10) { 
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }

  Serial.print("\nDistance:");
  Serial.print(distance);
  Serial.println("cm\n");
  delay(500);
}
