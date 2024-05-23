#include <DallasTemperature.h>
#include <OneWire.h>

int sensor = 10; 
OneWire oneWire(sensor);
DallasTemperature sensors(&oneWire);

void setup() {
    Serial.begin(9600);
    Serial.println("prueba de biblioteca");
    sensors.begin();
}

void loop() {
  //Serial.print("solicitando temperatura");
  sensors.requestTemperatures();
 // Serial.println(" hecho");
  Serial.print("la temperatura es: ");
  Serial.println(sensors.getTempCByIndex(0));

}
/*comenta*/