int sensor = 2;  
int led = 13;
void setup ()
{

pinMode (sensor, INPUT) ;
pinMode (led, OUTPUT);


}
void loop ()
{
digitalWrite(led,!digitalRead(sensor));
}
