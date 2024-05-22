#include <IRremote.h>
#include <IRremoteInt.h>

IRsend irsend;

int button = 2;
int valor;

void setup() {
  
  Serial.begin(9600);
  pinMode(button,INPUT);
}
void loop() {
  
  valor=digitalRead(button);
  if(valor ==LOW){
    
      irsend.sendNEC(0x20DF10EF,32);
   Serial.println("enviado");
  digitalRead(button);
    }

}
