
int Led = 13;// LED pin
int Shock = 3;
int val;

void setup () {
 Serial.begin(9600);
 pinMode(Led, OUTPUT);
 pinMode(Shock, INPUT);
}

void loop () {
 val = digitalRead (Shock);// read digital interface is assigned a value of 3 val
 Serial.println(val);
 if (val == HIGH) {// When the percussion when the sensor detects a signal, LED flashes
  digitalWrite(Led, LOW);
 }
 else {
  digitalWrite(Led, HIGH);
 }
}
