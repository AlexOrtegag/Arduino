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
  analogWrite(rojo,50);//amarillo
  analogWrite(verde,0);
  analogWrite(azul,255);
  delay(2000);

  analogWrite(rojo,255);//celeste
  analogWrite(verde,75);
  analogWrite(azul,50);
  delay(2000);

  analogWrite(rojo,100);//rosado
  analogWrite(verde,137);
  analogWrite(azul,100);
  delay(2000);
}

