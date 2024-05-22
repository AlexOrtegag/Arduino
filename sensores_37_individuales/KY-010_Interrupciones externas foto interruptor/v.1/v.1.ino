//programa que permite contar las interrupciones generadas por el foto interruptor
//mediante una rutina de interrupcion externa sobre el pin digital 2 y
//mostrar el valor de la cuenta por el monitor serial.

volatile int contador=0;// variable global CONTADOR
int anterior=0;// variable para determinar si el valor de CONTADOR ha cambiado desde la ultima vez

void setup()
{
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(2),sensor,RISING);
  
}

void loop()
{
  if(anterior != contador)// si hubo un cambio respecto del valor anterior
  {
    Serial.println(contador);// imprime en monitor serial el valor de CONTADOR
    anterior=contador;// actualiza valor de ANTERIOR con nuevo valor de CONTADOR
  }
}
void sensor()// rutina ISR
  {
    contador++;// incrementa valor de CONTADOR en 1
  }
