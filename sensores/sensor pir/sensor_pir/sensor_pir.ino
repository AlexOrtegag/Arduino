int pir=2;
int relay=13;
int estado=0;

 void setup()
 {
  pinMode(pir,INPUT);
  pinMode(relay,OUTPUT);
  delay(20000);
  
 }
void loop()
{
  estado=digitalRead(pir);
    if(estado==HIGH)
    {
      digitalWrite(relay,HIGH);
      delay(4000);
    }
  else
  {
    digitalWrite(relay,LOW);
  }
}
