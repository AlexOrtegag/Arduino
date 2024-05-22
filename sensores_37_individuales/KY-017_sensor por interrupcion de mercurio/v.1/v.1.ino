int sensor=2;
int led=3;
int estado;

void setup()
{
  pinMode(sensor,INPUT);
  pinMode(led,OUTPUT);
}

void loop()
{
  estado=digitalRead(sensor);
  digitalWrite(led,estado);
  delay(100);
}

