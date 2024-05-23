//para encender un LED cuando el sensor
//detecta un golpe o vibracion fuerte escribiendo de forma directa en el LED.
//El sensor brinda un nivel logico bajo cuando detecta la vibracion.

int sensor=2;// pin S de modulo a pin 2
int led=13;// anodo de LED a pin 3
int estado;// variable almacena valor leido de pin 2

void setup()
{
  pinMode(sensor,INPUT);
  pinMode(led,OUTPUT);
}

void loop()
{
  estado=digitalRead(sensor);// lee valor de pin 2
  digitalWrite(led,!estado);// escribe en LED el valor opuesto del leido
}
