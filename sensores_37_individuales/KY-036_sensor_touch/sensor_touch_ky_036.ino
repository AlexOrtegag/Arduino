int Led = 13 ; // define la interfaz LED
int buttonpin = 3 ; // define la interfaz del sensor táctil de metal
int val ; // define variables numéricas val
void setup() {
pinMode ( Led , OUTPUT ) ; // define el LED como interfaz de salida
pinMode ( buttonpin , INPUT ) ; // define la interfaz de salida del sensor táctil de metal
}
void loop()
{
val = digitalRead ( buttonpin ) ; // a la interfaz digital se le asignará un valor de 3 para leer val
if ( val == HIGH ) // Cuando el sensor táctil de metal detecta una señal, el LED parpadea
{
digitalWrite ( Led , HIGH ) ;
}
else
{
digitalWrite ( Led , LOW ) ;
}
}
