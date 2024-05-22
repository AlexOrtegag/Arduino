int BUZZER = 13;
int i;

void setup(){
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  for(i=0; i<=255; i++){
    Serial.print(i);
    Serial.print(": ");
    Serial.print ((i*100)/255);
    Serial.println("%");
    analogWrite(BUZZER, i);
    delay(50);
    analogWrite(BUZZER, 0);
    delay(50);
  }
}
