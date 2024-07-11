#include <AFMotor.h>
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

void setup() 
{
  motor1.setSpeed(250);  //Velocidad estándar de 250, máxima velocidad posible 255
  motor2.setSpeed(250);  //Recuerda que puedes cambiar la velocidad estándar en el loop
  motor3.setSpeed(250);  
  motor4.setSpeed(250);  
}

void loop() 
{
  motor1.run(FORWARD);   //Recuerda (FORWARD = ADELANTE) – (BACKWARD = ATRAS) – (RELEASE = DETENER)
  motor2.run(BACKWARD);
  motor1.run(FORWARD);   
  motor2.run(BACKWARD);
  motor1.setSpeed(200);  //Puedes varias la velocidad de 0 como mínima a 255 como maxima
  motor2.setSpeed(200);  //Sin embargo con velocidades menores a 100 generalmente el motor ya no tiene la potencia para mover un robot
  motor3.setSpeed(200);  
  motor4.setSpeed(200); 
  delay(2000);

   motor1.run(RELEASE);   //Recuerda (FORWARD = ADELANTE) – (BACKWARD = ATRAS) – (RELEASE = DETENER)
  motor2.run(RELEASE);
  motor1.run(RELEASE);   
  motor2.run(RELEASE);
  motor1.setSpeed(200);  //Puedes varias la velocidad de 0 como mínima a 255 como maxima
  motor2.setSpeed(200);  //Sin embargo con velocidades menores a 100 generalmente el motor ya no tiene la potencia para mover un robot
  motor3.setSpeed(200);  
  motor4.setSpeed(200); 
  delay(2000);
}
