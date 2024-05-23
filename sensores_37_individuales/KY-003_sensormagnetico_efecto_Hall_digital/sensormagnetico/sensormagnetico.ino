int led = 13;//SENSOR KY003 SENSOR MAGNETICO DE EFECTO hall digital transistor 3144
int sensor = 2;

void setup() {
pinMode(led,OUTPUT);
pinMode(sensor,INPUT);

}

void loop() {
 while(digitalRead(sensor)==HIGH);
 digitalWrite(led,HIGH);
 while(digitalRead(sensor)==LOW);
 digitalWrite(led,LOW);

}
