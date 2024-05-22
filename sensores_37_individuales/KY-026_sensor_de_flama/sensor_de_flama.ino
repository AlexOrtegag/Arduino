const int LED=13;
const int FLAME = 2;

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(FLAME, INPUT);  
}


void loop(){
  digitalWrite(LED, digitalRead(FLAME));  
}
