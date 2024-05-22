//Programa que demuestra el funcionamiento del sensor de linea imprimiendo
//en monitor serial si se encuentra sobre una linea de color negro o fuera de la misma.

int sensor=2;// salida de sensor a pin digital 2
int valor;// almacena valor leido del sensor
int anterior=1;// almacena ultimo valor leido del sensor


void setup()
{
  Serial.begin(9600);
  pinMode(sensor,INPUT);// pin 2 como entrada
}

void loop()
{
  /*
  valor=digitalRead(sensor);// lee valor de sensor y asigna a variable VALOR
    if(valor!=anterior)// si el valor es distinto del ultimo
      {
        if(valor==HIGH)// si VALOR tiene un nivel alto es linea negra
        Serial.println("linea");// imprime en monitor serial la palabra Linea
        else// si VALOR tiene un nivel bajo es fuera de linea
        Serial.println("fuera");// imprime en monitor serial la palabra Fuera
        anterior=valor; // actualiza variable ANTERIOR con el actual de VALOR
      }
   delay(500);// breve demora de medio segundo
   */
   
int valorAnalogico=analogRead(0);
Serial.print("valor: ");
Serial.println(valorAnalogico);
delay(200);

}


