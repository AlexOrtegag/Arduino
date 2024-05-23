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
  if(estado==LOW)// si se detecta vibracion
  {
    digitalWrite(led,HIGH);// enciende LED
    delay(500);// demora de medio segundo para visualizar bien el LED encendido
  }
  digitalWrite(led,LOW);// apaga LED
}
