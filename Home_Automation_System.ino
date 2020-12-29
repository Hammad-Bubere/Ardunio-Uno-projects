//HOME AUTOMATION SYSTEM
#include<SoftwareSerial.h>
SoftwareSerial BT(10,11);//(TX,RX)blutooth Tx,Rx pin to ardunio pin 10,11
String readData;

void setup()
{
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(2,OUTPUT);//RELAY 1
  pinMode(3,OUTPUT);//RELAY 2
  pinMode(4,OUTPUT);//RELAY 3
  pinMode(5,OUTPUT);//RELAY 4
}

void loop()
{
  while (BT.available())
{
  delay(10);
  char c=BT.read();
  readData +=c;
}
if (readData.length()>0)
{
  Serial.println(readData);
if (readData == "a")
{
  digitalWrite(2,LOW);//1 relay power off
}

else if (readData == "A")
{
  digitalWrite(2, HIGH);//1 relay power on
}
else if (readData == "b")
{
  digitalWrite(3,LOW);// 2 relay power off
}

else if (readData == "B")
{
  digitalWrite(3, HIGH);//2 relay power on
}
else if (readData == "c")
{
  digitalWrite(4,LOW);// 3 relay power off
}

else if (readData == "C")
{
  digitalWrite(4, HIGH);// 3 relay power on
} 
else if (readData == "D")
{
  digitalWrite(5,HIGH);
}

else if (readData == "d")
{
  digitalWrite(5, LOW);
}
readData="";
}
}
