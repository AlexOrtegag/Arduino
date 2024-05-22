 #include <math.h>

int sensore = A0;
int led = 13;

double sensor(int analog){
  double temp;
  temp = log(10000.0*((1024.0/analog-1)));
  temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * temp *
  temp )) * temp );
  temp = temp - 273.15;
  return temp;
  }

  void setup(){
    Serial.begin(9600);
    pinMode(led,OUTPUT);
    }

    void loop(){
      int readval = analogRead(sensore);
      double temp = sensor(readval);

        if(temp > 25)
        {
          Serial.println(temp);
          delay(500);
          digitalWrite(led,HIGH);
          }


      
      }
