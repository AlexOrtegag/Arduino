#include <DHT.h>// importa la Librerias DHT
#include <DHT_U.h>

int sensor=2;// pin DATA de DHT22 a pin digital 2
int temp;
int hum;

DHT dht(sensor,DHT11);// creacion del objeto, cambiar segundo parametro
                      // por DHT11 si se utiliza en lugar del DHT22
void setup()
{
  Serial.begin(9600);// inicializacion de monitor serial
  dht.begin();// inicializacion de sensor
}

void loop()
{
  temp= dht.readTemperature();  // obtencion de valor de temperatura
  hum=dht.readHumidity();// obtencion de valor de humedad
  Serial.print("temperatura: ");// escritura en monitor serial de los valores
  Serial.print(temp);
  Serial.print("  humedad: ");
  Serial.println(hum);
  delay(500);
}

