/*Programa que utiliza el modulo joystick para encender LEDs mediante PWM
  y obtener una indicacion visual del movimiento de la palanca y cierre del
  interruptor incorporado.
  */
int x;// variable para almacenar valor leido del eje X
int y;// variable para almacenar valor leido del eje y
int led_izquierdo=3;// LED izquierdo a pin digital 3
int led_derecho=5;// LED derecho a pin digital 5
int led_bajo=6;// LED de abajo a pin digital 6
int led_arriba=9;// LED de arriba a pin digital 9
int pulsador=10;// pulsador incorporado pin digital 10
int led_sw=11;// LED de pulsador a pin digital 11
int sw;// variable para almacenar valor leido del pulsador

void setup()
{
  pinMode(led_izquierdo,OUTPUT);// LED como salida
  pinMode(led_derecho,OUTPUT);// LED como salida
  pinMode(led_bajo,OUTPUT);// LED como salida
  pinMode(led_arriba,OUTPUT);// LED como salida
  pinMode(led_sw,OUTPUT);// LED como salida
  pinMode(pulsador,INPUT);// pulsador como entrada
}

void loop()
{
  x=analogRead(A0);// lectura de valor de eje x
  y=analogRead(A1);// lectura de valor de eje y
  sw=digitalRead(pulsador);// lectura de valor de pulsador


      if(x>= 0 && x < 480)// si X esta en la zona izquierda
      {
        analogWrite(led_izquierdo,map(x,0,480, 255,0));// brillo LED proporcional
      }
      else
      {
        analogWrite(led_izquierdo,0);// X en zona de reposo, apaga LED
      }

      if(x>= 520 && x < 1023)// si X esta en la zona derecha
      {
        analogWrite(led_derecho,map(x,520,1023, 0,255));// brillo LED proporcional
      }
      else
      {
        analogWrite(led_derecho,0);// X en zona de reposo, apaga LED
      }

      if(y>= 0 && y < 480)// si Y esta en la zona de abajo
      {
        analogWrite(led_bajo,map(x,0,480, 255,0));// brillo LED proporcional
      }
      else
      {
        analogWrite(led_bajo,0);// Y en zona de reposo, apaga LED
      }

      if(y>= 520 && y < 1023)// si Y esta en la zona de arriba
      {
        analogWrite(led_arriba,map(x,520,1023, 0,255));// brillo LED proporcional
      }
      else
      {
        analogWrite(led_arriba,0);  // Y en zona de reposo, apaga LED  
      }

   digitalWrite(led_sw, !sw);// escribe en LED valor opuesto al leido del pulsador
}



