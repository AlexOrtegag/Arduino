/*
 rograma que permite establecer una comunicacion con el modulo Bluetooth HC-05
 y encendero y apagar el led 13 que viene integrado al arduino
 */
#include <SoftwareSerial.h>// libreria que permite establecer pines digitales  para comunicacion serie

SoftwareSerial mibt(10,11);// pin 10 como RX, pin 11 como TX

int led = 13;
char dato = 0;

void setup()
{
  pinMode(led,OUTPUT);
  mibt.begin(38400);// comunicacion serie entre Arduino y el modulo a 38400 bps
}
void loop()
{
  if (mibt.available()){
    dato = mibt.read();
    if(dato == '1')
    digitalWrite(led,HIGH);
  
    if(dato == '2')
    digitalWrite(led,LOW);
  }
}
