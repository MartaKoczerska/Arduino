


int led = 13;
{
  pinMode(led, OUTPUT);     
}


void loop() {
  for (int i = 0; i < 3; i = i + 1){
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);

}
  delay(2000);
  {for (int i = 0; i < 3; i = i + 1){
  digitalWrite(led, HIGH);
  delay(3000);
  digitalWrite(led, LOW);
  delay(500);
} }
delay(2000);
{for (int i = 0; i < 3; i = i + 1){
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}
delay(5000);
}
}
