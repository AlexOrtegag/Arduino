int rojo=9;
int verde=10;


void setup()
{
  pinMode(rojo,OUTPUT);
  pinMode(verde,OUTPUT);
}

void loop()
{

  analogWrite(rojo,0);
  analogWrite(verde,255);
  delay(2000);

  analogWrite(rojo,255);
  analogWrite(verde,0);
  delay(2000);

  analogWrite(rojo,255);
  analogWrite(verde,255);
  delay(2000);
}

