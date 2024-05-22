int sensor;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  sensor= analogRead(A0);
  if(sensor< 450 || sensor > 600)
  {
    Serial.print("campo detectado: ");
  }
  
  Serial.println(sensor);
  delay(500);
}

