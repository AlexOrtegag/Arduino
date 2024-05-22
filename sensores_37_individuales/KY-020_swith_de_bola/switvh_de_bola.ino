int led = 13;
int sensor =2;

void setup() {
pinMode(led,OUTPUT);
pinMode(sensor,INPUT);

}

void loop() {
  digitalWrite(led,digitalRead(sensor));

}
