// usar salida digital de sensor de sonido

int mic=2;// D0 de modulo a pin 2
int led=3;// anodo de LED a pin 3
int valor;// variable para almacenar valor de D0
int estado;// variable para almacenar estado del LED

void setup()
{
  pinMode(mic,INPUT);// pin 2 como entrada
  pinMode(led,OUTPUT);// pin 3 como salida
}

void loop()
{
  valor=digitalRead(mic);// obtiene valor de D0
    if(valor==HIGH)// si D0 tiene un valor alto
      {
        estado=digitalRead(led);// almacena estado del led (encendido o apagado)
        digitalWrite(led,!estado);// escribe en LED el valor opuesto al que tenia
        delay(500);// demora de medio seg. para evitar pulsos espureos
      }
}

