int pulsador =2;
int led=3;
//int estado=LOW;

void setup()
{
  pinMode(pulsador,INPUT);
  pinMode(led,OUTPUT);
  digitalWrite(LED, LOW);

}

void loop()
{
  while(digitalRead(pulsador)== LOW)// espera infinitamente hasta que se presione el pulsador
  {
  }
    
    digitalWrite(led,HIGH);// enciende LED
    delay(5000);         // espera de 5 seg.
    digitalWrite(led,LOW);// apaga LED
   
    while(digitalRead(pulsador)== HIGH) // espera como funcion antirebote simple
    {
    
    }
}

