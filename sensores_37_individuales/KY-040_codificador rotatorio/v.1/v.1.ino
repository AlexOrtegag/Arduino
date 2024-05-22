//Programa que demuestra el funcionamiento del codificador rotatorio
//utilizando interrupciones y permitiendo incrementar o decrementar un valor
//inicial dependiendo del sentido de giro del mismo y estableciendo un limite
//minimo y maximo que puede asumir la variable POSICION.

int a=2;//variable A a pin digital 2 (DT en modulo)
int b=4;//variable B a pin digital 4 (CLK en modulo)

int anterior=50;// almacena valor anterior de la variable POSICION

volatile int posicion=50;// variable POSICION con valor inicial de 50 y definida como global al ser usada en loop e ISR (encoder)

void setup()
{
  pinMode(a,INPUT);// A como entrada
  pinMode(b,INPUT);// B como entrada

  Serial.begin(9600);// incializacion de comunicacion serie a 9600 bps

  attachInterrupt(digitalPinToInterrupt(a),encoder,LOW);// interrupcion sobre pin A con funcion ISR encoder y modo LOW

  Serial.println("listo");// imprime en monitor serial Listo
}

void loop()
{
  if(posicion!=anterior)// si el valor de POSICION es distinto de ANTERIOR
  {
    Serial.println(posicion);// imprime valor de POSICION
    anterior=posicion;// asigna a ANTERIOR el valor actualizado de POSICION
  }
}

void encoder()
{
  static unsigned long ultimainterrupcion=0;// variable static con ultimo valor de // tiempo de interrupcion
  unsigned long tiempointerrupcion=millis();// variable almacena valor de func. millis

  if( tiempointerrupcion- ultimainterrupcion > 5)// rutina antirebote desestima pulsos menores a 5 mseg.
  {
      if (digitalRead(b)==HIGH)// si B es HIGH, sentido horario
      {
        posicion++;// incrementa POSICION en 1
      }
      else// si B es LOW, senti anti horario
      {
        posicion--;// decrementa POSICION en 1
      }
      posicion=min(100,max(0,posicion));// establece limite inferior de 0 y  superior de 100 para POSICION
      ultimainterrupcion=tiempointerrupcion;// guarda valor actualizado del tiempo de la interrupcion en variable static
  }
}

