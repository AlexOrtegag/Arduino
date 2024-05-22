int sensor = A0;
int led = 13;
void setup() {
pinMode(led,OUTPUT);
Serial.begin(9600);

}

void loop() {
  int valor = analogRead(sensor);
  delay(1000);
  Serial.println(valor);

  valor = map(valor,0,1023,255,0);
 analogWrite(led,valor);
}
