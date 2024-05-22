//sensores a 45 grados para encender sus propios LEDs integrados al inclinarse.
int sensor=2;
int sensor2=3;
int led=4;
int led2=5;
int estado;
int estado2;
void setup()
{
  pinMode(sensor,INPUT);
  pinMode(sensor2,INPUT);
  
  pinMode(led,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop()
{
  estado=digitalRead(sensor);
  digitalWrite(led,estado);
  delay(100);

  estado2=digitalRead(sensor2);
  digitalWrite(led2,estado2);
  delay(100);
}
