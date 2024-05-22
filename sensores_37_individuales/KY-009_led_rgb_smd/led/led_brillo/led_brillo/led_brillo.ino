int led=3;// LED en pin 3
int brillo;


void setup()
{
  pinMode(led,OUTPUT); // pin 3 como salida
}
 void loop()
 {
  for(brillo=0;brillo<255;brillo++ )// bucle de 0 a 255
  {
    analogWrite(led,brillo);// escritura en pin PWM
    delay(15);// demora entre incrementos
  }

  for(brillo=255;brillo>=0;brillo-- )// bucle de 255 a 0
    {
      analogWrite(led,brillo);// escritura en pin PWM
      delay(15);// demora entre incrementos
    }
    
 }

