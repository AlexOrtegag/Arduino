/*
   Programa que permite mostrar en el monitor serial el codigo correspondiente al boton presionado en un control remoto mediante receptor infrarojo. Ademas enciende
  con el boton 1 el componente rojo de un LED RGB catodo comun, con el boton 2 el verde y con el boton 3 el azul. Codigos de cada boton para un control especifico a modo
  de ejemplo.
*/

#include <boarddefs.h>
#include <IRremote.h>
#include <IRremoteInt.h>
#include <ir_Lego_PF_BitStreamEncoder.h>// importa libreria IRremote

#define Boton_1 0x80BF49B6    // reemplaza cada instancia de Boton_1 por su valor HEX
#define Boton_2 0x80BFC936    // reemplaza cada instancia de Boton_2 por su valor HEX
#define Boton_3 0x80BF33CC    // reemplaza cada instancia de Boton_3 por su valor HEX

int sensor=11;// sensor a pin digital 11 
IRrecv irrecv(sensor);// establece al 11 para objeto irrecv
decode_results codigo;// crea objeto codigo de la clase decode_results

int LEDROJO = 2;      // componente rojo de LED RGB a pin 2
int LEDVERDE = 3;     // componente verde de LED RGB a pin 3
int LEDAZUL = 4;      // componente azul de LED RGB a pin 4

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn();// inicializa recepcion de datos

  pinMode(LEDROJO, OUTPUT);    // pin 2 como salida
  pinMode(LEDVERDE, OUTPUT);    // pin 3 como salida
  pinMode(LEDAZUL, OUTPUT);   // pin 4 como salida
}

void loop()
{
  if(irrecv.decode(&codigo))// si existen datos ya decodificados
  {
    Serial.println(codigo.value,HEX);// imprime valor en hexadecimal en monitor
            if (codigo.value == Boton_1)      // si codigo recibido es igual a Boton_1
               digitalWrite(LEDROJO, !digitalRead(LEDROJO)); // enciende o apaga componente rojo

             if (codigo.value == Boton_2)      // si codigo recibido es igual a Boton_2
                digitalWrite(LEDVERDE, !digitalRead(LEDVERDE)); // enciende o apaga componente verde

              if (codigo.value == Boton_3)      // si codigo recibido es igual a Boton_3
                  digitalWrite(LEDAZUL, !digitalRead(LEDAZUL)); // enciende o apaga componente azul
    
      irrecv.resume();// resume la adquisicion de datos
  }
  delay(100);// breve demora de 100 ms.
}
