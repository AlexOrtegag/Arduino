int relay=2; // pin IN de modulo a pin digital 2 de Arduino

void setup()
{
  pinMode(relay,OUTPUT);// pin 2 como salida
}

void loop()
{
  digitalWrite(relay,HIGH);// activacion del modulo de rele con un nivel bajo
  delay(5000);// demora de 5 seg.
  digitalWrite(relay,LOW);// apagado del modulo de rele con un nivel alto
  delay(5000);// demora de 5 seg.
}

