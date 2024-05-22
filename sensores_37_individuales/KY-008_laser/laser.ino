int laser = 2;

void setup() {
pinMode(laser,OUTPUT);  // put your setup code here, to run once:

}

void loop() {
 digitalWrite(laser,HIGH);
 delay(1000);
 digitalWrite(laser,LOW);
 delay(1000);
}
