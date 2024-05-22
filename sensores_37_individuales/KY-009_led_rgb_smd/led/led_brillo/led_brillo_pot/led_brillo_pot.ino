int led = 3;// LED en pin 3
int brillo;
int pot=0; // potenciometro en pin A0

void setup()
{
  pinMode(led,OUTPUT);// pin 3 como salida
  // las entradas analogicas no requieren inicializacion
}

void loop()
{
  brillo= analogRead(pot)/4;// valor leido de entrada analogica divido por 4
  analogWrite(led,brillo);// brillo del LED proporcional al giro del potenciometro
}

