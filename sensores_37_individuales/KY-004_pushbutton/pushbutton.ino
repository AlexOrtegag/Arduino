int push = 2;
int led  = 13;
void setup() {
  push = LOW;
  pinMode(push,INPUT);// put your setup code here, to run once:
  pinMode(led,OUTPUT);
}

void loop() {
  if(digitalRead(push) == HIGH){
    digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(2000);
    digitalWrite(led,HIGH);
    delay(1000);
  }
  else{
    digitalWrite(led,LOW);
  }
    }
  
