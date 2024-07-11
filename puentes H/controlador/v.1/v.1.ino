//giro horario y antihorario
int in1 = 9;  // Control de dirección del motor
int in2 = 6;  // Control de dirección del motor
void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void loop() {
  // Giro en dirección horaria
  digitalWrite(in2, LOW);  // Dirección horaria
  analogWrite(in1, 180); // Velocidad baja
 
  delay(5000);
  
  // Giro en dirección antihoraria
  digitalWrite(in1, LOW);  // Dirección antihoraria
  analogWrite(in2, 180);   // Velocidad baja
  
  delay(5000);
}
