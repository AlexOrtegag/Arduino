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
  miColor(50,0,255);//amarillo
  miColor(255,75,50);//celeste
  miColor(100,137,100);//rosado
}

void miColor(int ROJO, int VERDE, int AZUL)
{
  analogWrite(rojo,ROJO);
  delay(500);
  analogWrite(verde,VERDE);
  delay(500);
  analogWrite(azul,AZUL);
  delay(500);
}
