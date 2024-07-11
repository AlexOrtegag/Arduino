// Adafruit Motor shield library
// copyright Adafruit Industries LLC, 2009
// this code is public domain, enjoy!

#include <AFMotor.h>

// Connect a stepper motor with 48 steps per revolution (7.5 degree)
// to motor port #2 (       M3      and       M4)
//                   naranja,rosa, rojo   azul,amarillo
AF_Stepper motor(48, 2);

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Stepper test!");

  motor.setSpeed(100);  // 10 rpm   
}

void loop() {
  Serial.println("Single coil steps");
  motor.step(90, FORWARD, SINGLE); 
  motor.step(90, BACKWARD, SINGLE); 

  Serial.println("Double coil steps");
  motor.step(180, FORWARD, DOUBLE); 
  motor.step(180, BACKWARD, DOUBLE);

  Serial.println("Interleave coil steps");
  motor.step(270, FORWARD, INTERLEAVE); 
  motor.step(270, BACKWARD, INTERLEAVE); 

  Serial.println("Micrsostep steps");
  motor.step(360, FORWARD, MICROSTEP); 
  motor.step(360, BACKWARD, MICROSTEP); 
}
