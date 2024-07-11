//giro de motor con velocidad en aumento
int in1=2;
int in2=3;
int ena=5;
int velocidad;

void setup()
{
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(ena,OUTPUT);
}

void loop()
{
  for(velocidad=0; velocidad < 256; velocidad++)// bucle que incrementa de a uno
    {
      digitalWrite(ena, velocidad);// el valor de velocidad y aplica a ENA
      digitalWrite(in1,LOW);
      digitalWrite(in2,HIGH);
       delay(50);
    }

  digitalWrite(ena,LOW);// ENA en 0 para deshabilitar motor
  delay(2000);
  
    for( velocidad =0; velocidad < 256; velocidad++)// bucle que incrementa de a uno
    {
      digitalWrite(ena, velocidad);// el valor de velocidad y aplica a ENA
      digitalWrite(in1,HIGH);
      digitalWrite(in2,LOW);
       delay(50);
    }
    
  digitalWrite(ena,LOW);// ENA en 0 para deshabilitar motor
  delay(2000);
}

