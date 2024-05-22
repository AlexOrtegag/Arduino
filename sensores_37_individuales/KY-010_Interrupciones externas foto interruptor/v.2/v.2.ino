//Programa que mediante las interrupciones generadas por el foto interruptor
//conectado a interrupcion externa sobre el pin digital 2
//enciende y apaga el LED incorporado con mayor frecuencia a medida que ingresan mas interrupciones.

volatile int contador=1000;// variable global CONTADOR

void setup()
{
  pinMode(13,OUTPUT);
  attachInterrupt(digitalPinToInterrupt(2),sensor,RISING);
  
}

void loop()
{
 digitalWrite(13,HIGH);// enciende LED integrado
 delay(contador);// demora basada en variable CONTADOR
 digitalWrite(13,LOW);// apaga LED integrado
 delay(contador);// demora basada en variable CONTADOR
  
  if(contador<100)// si CONTADOR es menor a 100
  {
    contador=1000;// restablece valor de CONTADOR a 1000
  }
}
void sensor()// rutina ISR
  {
    contador=contador-100;// decrementa valor de CONTADOR en 100
  }
