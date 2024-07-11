// Incluímos la librería para poder controlar dos servos que tenemos la posibilidad de controlar con el motor shield 
#include <Servo.h>
 
// Declaramos la variable para controlar los dos servos
Servo servoMotor1;//creamos/ declaramos el servo1(objeto)
Servo servoMotor2;//creamos/ declaramos el servo2(objeto)
 
void setup() {
  // Iniciamos el monitor serie para mostrar el resultado
  Serial.begin(9600);
 
  // Iniciamos el servo para que empiece a trabajar con el pin 9 y 10
  servoMotor1.attach(10);
  servoMotor2.attach(9);
  
}
 
void loop() {
  
  // Desplazamos a la posición 0º
  servoMotor1.write(0);
  servoMotor2.write(0);
  // Esperamos 1 segundo
  delay(1000);
  
  // Desplazamos a la posición 90º
  servoMotor1.write(90);
  servoMotor2.write(90);
  // Esperamos 1 segundo
  delay(1000);
  
  // Desplazamos a la posición 180º
  servoMotor1.write(180);
  servoMotor2.write(180);
  // Esperamos 1 segundo
  delay(1000);
}
