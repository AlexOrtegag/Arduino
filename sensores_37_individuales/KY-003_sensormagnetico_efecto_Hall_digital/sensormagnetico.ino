int led = 13;
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
