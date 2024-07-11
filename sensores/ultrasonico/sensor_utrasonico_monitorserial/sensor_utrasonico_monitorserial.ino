 int trig = 10; // trigger en pin 10
 int eco= 9;// echo en pin 9
 int led =13;// LED en pin 3
 int duracion;
 int distancia;

 void setup()
 {
  pinMode(trig,OUTPUT);// trigger como salida
  pinMode(eco,INPUT);// echo como entrada
  pinMode(led,OUTPUT);// LED como salida
  Serial.begin(9600);      // inicializacion de comunicacion serial a 9600 bps
 }
void loop()
{
  digitalWrite(trig,HIGH);// generacion del pulso a enviar
  delay(1);// al pin conectado al trigger
  digitalWrite(trig,LOW);// del sensor
  
  duracion = pulseIn(eco,HIGH);//usamos el pin eco para tomamos el tiempo en el que tarde en rebotar la senal
                               // con funcion pulseIn se espera un pulso alto en Echo
  distancia = duracion/58.2; // convertimos la duracion en distancia quedando como 58.2 como constante // distancia medida en centimetros
  Serial.println(distancia);// se imprime la distancia  // envio de valor de distancia por monitor serial
  delay(200); // demora entre datos
  
  if(distancia <= 20 && distancia >=0)//si la distanica esta entre 0 20 entra a la condicion // si distancia entre 0 y 20 cms.
  {
    digitalWrite(led,HIGH);// enciende LED
    delay(distancia*10);// demora proporcional a la distancia
    digitalWrite(led,LOW);// apaga LED
  }
}
