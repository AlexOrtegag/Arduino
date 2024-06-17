/*
 rograma que permite establecer una comunicacion con el modulo Bluetooth HC-05
 y configurarlo de manera tal que pueda ser vinculado mediante un telefono
  movil o dispositivo compatible.
 */
#include <SoftwareSerial.h>// libreria que permite establecer pines digitales  para comunicacion serie

SoftwareSerial mibt(10,11);// pin 10 como RX, pin 11 como TX

void setup()
{
  Serial.begin(9600);
  Serial.println("listo");// escribe Listo en el monitor
  mibt.begin(38400);// comunicacion serie entre Arduino y el modulo a 38400 bps
}
void loop()
{
  if(mibt.available())// si hay informacion disponible desde modulo
      Serial.write(mibt.read());// lee Bluetooth y envia a monitor serial de Arduino

  if(Serial.available())// si hay informacion disponible desde el monitor serial
      mibt.write(Serial.read());// lee monitor serial y envia a Bluetooth
      
}
