int senal = A0 ;  //Conectar en el pin analogico A0
int valor;

int led_pin = 13;
double alpha = 0.75;
int period = 20;
double change = 0.0;

void setup()
{
  pinMode(led_pin, OUTPUT);
  Serial.begin(9600);  //Activar puerto serial
}

void loop()
{
  //Serial.println(analogRead(A0));
  //delay(2);
  
  
  /*
  valor = analogRead(senal);  //Lectura señal anañogica
  if(valor >= 30 && 50 >= valor){
      Serial.println("No hay pulso"); 
  }
  else{
       Serial.println("Hay pulso");
  }*/

  static double old_value=0;
  static double old_change=0;
  
  int raw_value = analogRead(senal);
  
  double value = alpha * old_value + (1 - alpha) * raw_value;
  change = value - old_value;
  
  digitalWrite(led_pin,(change<0.0&&old_change>0.0));
  
  old_value=value;
  old_change=change;
  delay(period);
  
}
