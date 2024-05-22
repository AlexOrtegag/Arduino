int sensor_1=5,sensor_2=A0,valor_1,valor_2,led=13; // Declaración de las variables a utilizar en todo el programa  

void setup() {
  Serial.begin(9600); // Velocidad de comunicación a 9600 baudios 
  digitalWrite(led,LOW); // El led se pone en estado bajo
  pinMode(5,INPUT);      // Se configura el pin 5 como entrada
  pinMode(13,OUTPUT);    // Se configura el pin 13 como salida
}

void loop() {
 valor_1=digitalRead(sensor_1); // Se lee la variable digital sensor_1 y se asigna a valor_1
 valor_2=analogRead(sensor_2);  // Se lee la variable analógica sensor_2 y se asigna a valor_2
 Serial.print(valor_1);         // Se imprime valor_1 en el monitor serial
 Serial.print(" -----------");  // Se realiza una línea para dividir los valores
 Serial.print("\t");            // Se realiza una tabulación 
 Serial.println(valor_2);       // Se imprime el valor_2 en el monitor serial
  if(valor_1==1){               // Es verdadero cuando el valor_1 es igual a uno 
    digitalWrite(led,HIGH);     // Se pone en estado alto el led
  }else if(valor_1==0){         // Es verdadero cuando el valor_1 es igual a cero
  digitalWrite(led,LOW);        // Se pone en estado bajo el led
  }
}
