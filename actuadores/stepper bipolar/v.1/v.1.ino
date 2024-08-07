//Simple programa para controlar un motor del tipo bipolar NEMA 17 mediante el
//controlador driver A4988 logrando un giro de media vuelta en un sentido y en otro

#define Step 4// pin STEP de A4988 a pin 4
#define dir 5// pin DIR de A4988 a pin 5


void setup()
{
  pinMode(Step,OUTPUT);// pin 4 como salida
  pinMode(dir,OUTPUT);// pin 5 como salida
}

void loop()
{
  digitalWrite(dir,HIGH);// giro en un sentido
  for(int i = 0; i < 200; i++)// 200 pasos para motor de 0.9 grados de angulo de paso
  {
    digitalWrite(Step,HIGH);// nivel alto
    delay(10);// por 10 mseg
    digitalWrite(Step,LOW);// nivel bajo
    delay(10);// por 10 mseg
  }

  delay(2000);// demora de 2 segundos


  digitalWrite(dir,LOW);// giro en sentido opuesto
  for( int i = 0; i < 200; i++)
  {
    digitalWrite(Step,HIGH);
    delay(10);
    digitalWrite(Step,LOW);
    delay(10);
  }
  delay(2000);// demora de 2 segundos
}

