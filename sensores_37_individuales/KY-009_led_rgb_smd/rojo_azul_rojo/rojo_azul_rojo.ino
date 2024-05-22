int rojo=9;
int verde=10;
int azul=11;

void setup()
{
  pinMode(rojo,OUTPUT);
  pinMode(verde,OUTPUT);
  pinMode(azul,OUTPUT);
}

void loop()
{
  analogWrite(rojo,0);
  analogWrite(verde,255);
  analogWrite(azul,255);
  delay(2000);

  analogWrite(rojo,255);
  analogWrite(verde,0);
  analogWrite(azul,255);
  delay(2000);

  analogWrite(rojo,255);
  analogWrite(verde,255);
  analogWrite(azul,0);
  delay(2000);
}

