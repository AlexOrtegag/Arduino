//Programa que utiliza la Libreria Stepper para el control de un motor unipolar
//de 5 hilos modelo 28BYJ-48 y su correspondiente driver ULN2003.
//Mediante el uso del monitor serie se le establece la cantidad de pasos a dar.

#include <Stepper.h>// incluye libreria stepper

Stepper motor1(2048, 8, 10, 9, 11); // pasos completos y concexiones del motor 

void setup()
{
  Serial.begin(9600);
  motor1.setSpeed(2);// en RPM (valores de 1, 2 o 3 para 28BYJ-48)
}

void loop()
{
  if(Serial.available())// espera por datos disponibles en monitor serie
  {
   int pasos=Serial.parseInt();// obtiene valor introducido en monitor serie y asigna  a variable pasos
   Serial.println(pasos);// imprime el valor ingresado
   motor1.step(pasos);// envia comando para dar la cantidad de pasos
  }
}
