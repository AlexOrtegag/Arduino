int in1=8;// pin digital 8 de Arduino a IN1 de modulo controlador
int in2=9;//pin digital 9 de Arduino a IN2 de modulo controlador
int in3=10;// pin digital 10 de Arduino a IN3 de modulo controlador
int in4=11;// pin digital 11 de Arduino a IN4 de modulo controlador
int demora=20;// demora entre pasos, no debe ser menor a 10 ms.

int paso[4][4]=// matriz (array bidimensional) con la secuencia de pasos
{
 {1, 1, 0, 0},
 {0, 1, 1, 0},
 {0, 0, 1, 1},
 {1, 0, 0, 1} 
};

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
    for(int i = 0; i < 4; i++)// bucle recorre la matriz de a una fila por vez para obtener los valores logicos a aplicar a IN1, IN2, IN3 e IN4
      {
        digitalWrite(in1, paso[1][0]);
        digitalWrite(in1, paso[1][1]);
        digitalWrite(in1, paso[1][2]);
        digitalWrite(in1, paso[1][3]);
        delay(demora);
      }
  }

    digitalWrite(in1,LOW);// detiene por 5 seg.
    digitalWrite(in2,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,LOW);
}

