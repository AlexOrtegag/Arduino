//int sensord = 2;
int sensora = A0;
int led = 13;
int valor;
void setup() {
  
 // pinMode(sensord,INPUT);
  pinMode(led,OUTPUT); 
  Serial.begin(9600);   

}

void loop() {
  /*digitalWrite(led,digitalRead(sensord));
  if (digitalRead(sensord) == HIGH){
  Serial.println("el sensor esta activado");
  }
  else{
    Serial.println("el sensor esta desactivado");
    }
*/
  valor = analogRead(sensora);
  valor = map(valor,0,1023,255,0);
  analogWrite(led,valor);
  
  
}
