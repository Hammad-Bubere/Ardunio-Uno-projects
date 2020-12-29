int count = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(2, INPUT_PULLUP);//connect push button one leg with ardunio ground and second leg with ardunio pin no 2
pinMode(6, OUTPUT);//connect led one leg with ardunio ground and second leg with ardunio pin no 6
}
void loop() {
int val = digitalRead(2);
if (val == 0)
{
  count = count + 1;
}
if (count == 1)
{
  analogWrite(6, 80);
}
else if (count == 2)
{
  analogWrite(6, 160);
}
else if (count == 3)
{
  analogWrite(6, 225);
}
else
{
  analogWrite(6, 0);
  count = 0;
}
delay (300);
}
