//Programa que utiliza fotoresistencia para cambiar el brillo del LED de forma directamente proporcional a la luz captada.

int sensor=0;// pin S de modulo a entrada analogica A0
int led=3;// LED en pin 3
int valor;// almacena valor leido de entrada A0
int PWM;

void setup()
{
  pinMode(led,OUTPUT);
  
}
void loop()
{
  valor=analogRead(sensor);// lee valor de entrada A0
  PWM=map(valor,0,1023,0,255);// convierte valores de entrada 0-1023 a 0-255 para brillo
  analogWrite(led,PWM);// escribe valor al LED
}

