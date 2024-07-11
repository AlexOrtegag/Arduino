//Programa que realiza un giro completo del motor 28BYJ-48 en conjunto con el controlador
//basado en ULN2003, detiene 5 segundos y luego comienza nuevamente. La secuencia es la de
//paso completo simple (wave drive) energizando de a una bobina por vez. Alimentar Arduino
//con fuente de alimentacion externa de 6 a 12 Vdc.

int in1=8;// pin digital 8 de Arduino a IN1 de modulo controlador
int in2=9;//pin digital 9 de Arduino a IN2 de modulo controlador
int in3=10;// pin digital 10 de Arduino a IN3 de modulo controlador
int in4=11;// pin digital 11 de Arduino a IN4 de modulo controlador
int demora=20;// demora entre pasos, no debe ser menor a 10 ms.

void setup()
{
  pinMode(in1,OUTPUT);// todos los pines como salida
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
}

void loop()
{
  for(int i = 0; i < 512; i++)// 512*4 = 2048 pasos
  {
    digitalWrite(in1,HIGH);// paso 1 
    digitalWrite(in2,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,LOW);
    delay(demora);

    
    digitalWrite(in1,LOW);// paso 2
    digitalWrite(in2,HIGH);
    digitalWrite(in3,LOW);
    digitalWrite(in4,LOW);
    delay(demora);

    
    digitalWrite(in1,LOW);// paso 3
    digitalWrite(in2,LOW);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
    delay(demora);

    
    digitalWrite(in1,LOW);// paso 4
    digitalWrite(in2,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,HIGH);
    delay(demora);
  }

    digitalWrite(in1,LOW);// detiene por 5 seg.
    digitalWrite(in2,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,LOW);
}


