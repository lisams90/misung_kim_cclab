void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);

}

void loop() {
  digitalWrite(13, HIGH);
  Serial.println("LED is on");
  delay(500);

  digitalWrite(13,LOW);
  Serial.println("LED is off");
  delay(10);
 
}
