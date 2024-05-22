/*
   Programa que permite mostrar en el monitor serial el codigo correspondiente al boton presionado en un control remoto mediante el modulo receptor .Requiere 
  la instalacion de la libreria IRremote.
*/

#include <boarddefs.h>
#include <IRremote.h>
#include <IRremoteInt.h>
#include <ir_Lego_PF_BitStreamEncoder.h>// importa libreria IRremote



int sensor=11;// sensor a pin digital 11 
IRrecv irrecv(sensor);// establece al 11 para objeto irrecv
decode_results codigo;// crea objeto codigo de la clase decode_results
void setup()
{ 
  
  Serial.begin(9600);
  irrecv.enableIRIn();// inicializa recepcion de datos
}

void loop()
{
  if(irrecv.decode(&codigo))// si existen datos ya decodificados
  {
    Serial.println(codigo.value,HEX);// imprime valor en hexadecimal en monitor
    irrecv.resume();// resume la adquisicion de datos 
  }
  delay(100);// breve demora de 100 ms.
}
