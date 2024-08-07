//Programa que utiliza la Libreria Stepper para el control de un motor unipolar
//de 5 hilos modelo 28BYJ-48 y su correspondiente driver ULN2003. Se establece una
//velocidad de 2 RPM y un total de 512 pasos equivalentes a un cuarto de vuelta.
//Luego con una cantidad negativa de pasos se produce el giro tambien de un cuarto
//de vuelta pero en sentido opuesto.


#include <Stepper.h>// incluye libreria stepper

Stepper motor1(2048, 8, 10, 9, 11); // pasos completos y concexiones del motor 

void setup()
{
  motor1.setSpeed(2);// en RPM (valores de 1, 2 o 3 para 28BYJ-48)
}

void loop()
{
  motor1.step(512);// cantidad de pasos
  delay(2000);// demora de 2 seg. por cuestiones practicas
  motor1.step(-512);// signo menos indica giro en sentido opuesto
  delay(2000);// demora de 2 seg. por cuestiones practicas
}

