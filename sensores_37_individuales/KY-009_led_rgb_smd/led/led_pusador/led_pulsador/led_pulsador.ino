void setup()
{
  pinMode(2,INPUT);// se pone el pin2 en modo de entrada
  pinMode(3,OUTPUT);// se pone el pin3 en modo salida
  
}
void loop()
{
 if (digitalRead(2)== HIGH)//se evalua el estado del pulsador
 {
  digitalWrite(3,HIGH);//se enciande si esta puldado

 }
  else
  {
    digitalWrite(3,LOW);// apagado en caso que no
  }
  
}

