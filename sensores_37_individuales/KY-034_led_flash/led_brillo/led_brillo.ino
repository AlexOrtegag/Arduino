int led=3;// LED en pin 3
int brillo;


void setup()
{
  pinMode(led,OUTPUT); // pin 3 como salida
}
 void loop()
 {
    digitalWrite(led,HIGH);// 
    delay(3500);
    digitalWrite(led,LOW);// 
    delay(3500);
    
 }

