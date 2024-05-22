int pulsador = 2;
int led = 3;
int estado = LOW;


void setup()
{
  pinMode(pulsador,INPUT);
  pinMode(led,OUTPUT);
  //digitalWrite(LED, LOW);

}
void loop()
{
  while(digitalRead(pulsador)== LOW)// espera infinitamente hasta que se presione el pulsador
  {
     
  }

estado = digitalRead(led);// leo estado del LED para saber si esta encendido o apagado
digitalWrite(led, !estado);// escribo en la salida el valor apuesto al leido con anterioridad

   while(digitalRead(pulsador)== HIGH)// espera como funcion antirebote simple
      {
    
      }

}


