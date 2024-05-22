// fotoresistencia para encender un LED cuando hay baja intensidad de luz ambiente.

int sensor=0;// pin S de modulo a entrada analogica A0
int led=3;// LED en pin 3
int valor;// almacena valor leido de entrada A0

void setup()
{
  pinMode(led,OUTPUT);
  
}
void loop()
{
  valor=analogRead(sensor);// lee valor de entrada A0
  if(valor<200)// un valor bajo representa oscuridad
  {
    digitalWrite(led,HIGH);// enciende LED
    delay(1000);// demora de 1 seg. para evitar parpadeo de LED
  }
  digitalWrite(led,LOW);// apaga LED
}

