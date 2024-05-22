//Programa que utiliza la salida analogica A0  para enviar el valor leido por monitor serial.

int microfono=0;// salida A0 de sensor a entrada analogica A0
int valor;// variable para almacenar valor leio de A0


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  valor=analogRead(microfono);// lee valor de entrada analogica
  Serial.println(valor);// escribe valor en monitor serial
  delay(500);// demora de medio segundo entre lecturas
}

