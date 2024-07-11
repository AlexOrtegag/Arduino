//giro horario y antihorario
int in1=2;
int in2=3;
int ena=5;

void setup()
{
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(ena,OUTPUT);
}

void loop()
{
  digitalWrite(ena,HIGH);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  delay(3000);

  digitalWrite(ena,LOW);
  delay(2000);
  
  digitalWrite(ena,HIGH);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  delay(3000);

  digitalWrite(ena,LOW);
  delay(2000);
}

