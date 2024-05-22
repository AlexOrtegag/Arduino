int readpin = A0;  
int incoming = 0;
void setup ()
{

pinMode (readpin, INPUT) ;

Serial.begin(9600);
}
void loop ()
{
incoming = analogRead(readpin) ;
Serial.println(incoming);
delay(400);
}
