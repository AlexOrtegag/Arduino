int BUZZER = 13;//buzze a pin 14
int i = 0;//se declara un indice para los posibles 12 pines que se la i representa el pin de lectura en el momento de ser seleccionado
int tonos [] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494};// aray donde se guardan las escala de notas 

void setup(){
  pinMode(BUZZER, OUTPUT);//buzzar rn modo salida

  for(i=0; i<12; i++){// se configura los pines como salida para evitar ruidos 
    pinMode(i, OUTPUT);
  }
}

void loop(){
  for(i=0; i<12; i++){
    if(digitalRead(i)==HIGH){// si tenemos una entrada de 0 al 12 entonces
      tone(BUZZER, tonos[i]);// el buzzer miestra la nota en el lugar perneneciente al array
      delay(500);// espera 500 milisegundos
    }
  }
  noTone(BUZZER);// y no has nada el buzzer queda en silencio
}
