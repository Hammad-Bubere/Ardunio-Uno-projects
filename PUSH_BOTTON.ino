void setup()
{
  pinMode(2,INPUT_PULLUP);
  pinMode(6,OUTPUT);
}
void loop()
{
  int val = digitalRead(2);
  if (val == 0)
  {
    digitalWrite(6,HIGH);
  }
  else
{
  digitalWrite(6,LOW);
}
}
