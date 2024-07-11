# include <Servo.h>// incluye libreria de Servo

Servo servo1;// crea objeto

int pinservo=3;// pin 2 conectado a señal del servo
int pulsomin=800;// pulso minimo en microsegundos
int pulsomax=2450;// pulso maximo en microsegundos
void setup()
{
  servo1.attach(pinservo,pulsomin,pulsomax);  // inicializacion de servo
  // la funcion attach sieve para inicalicial el servo el primer parametro es donde se
  //encuantra conectado, despues el valor de pulso minimo y despues el maximo
  // en esta funcion los valores de tiempo tienen que estar en micro segundo
}
void loop()
{
  servo1.write(0);// ubica el servo a 0 grados
  delay(1000);// espera de 5 seg.
}

