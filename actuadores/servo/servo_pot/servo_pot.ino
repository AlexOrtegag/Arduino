# include <Servo.h>// espera de 5 seg.

Servo servo1;// crea objeto

int pinservo=2;// pin 2 conectado a señal del servo
int pulsomin=850;//se pudee jugar con valores min bajando hasta sentir que se forza el servo
                 // pulso minimo en microsegundos
int pulsomax=2250;//se puede jugar con el valor max aumentado hasta sentir que el servo se forza
                  // pulso maximo en microsegundos
int valorpot;// variable para almacenar valor leido en entrada A0
int angulo;// valor de angulo a cargar en el servo

int pot=0;// potenciometro en entrada analogica A0

void setup()
{
  servo1.attach(pinservo,pulsomin,pulsomax);// inicializacion de servo
  // la funcion attach sieve para inicalicial el servo el primer parametro es donde se
  //encuantra conectado, despues el valor de pulso minimo y despues el maximo
  // en esta funcion los valores de tiempo tienen que estar en micro segundo

  //las entradas analogicas no requieren inicializacion
}
void loop()
{
  valorpot=analogRead(pot);// lee valor de entrada A0
                           //asignamos el valor leeido  de pot a valorpot 
  angulo=map(valorpot,0,1023,0,180);// con funcion map convierte rango de 0 a 1023
                                    // a rango de angulo de 0 a 180
                                    // la funcion map realiza la conversion de un rango
                                    //a otro rango siendo proporcionales, sus parametros son variable que se decea convertir
                                    // ranngo de vlaores que pude tomar la variable en este caso es una variable analogica(0.1023)
                                    //despues son los valores a lo que se decea convertir la funcion write en este caso toma
                                    //valores de 0 a 180
  servo1.write(angulo);// a rango de angulo de 0 a 180
                       // el resultado de la funcionmap se asigna a la variable angulo y esta 
                       //se aplica al servo y esta se escrive al servo
  delay(40);// demora para que el servo llegue a posicion
}
