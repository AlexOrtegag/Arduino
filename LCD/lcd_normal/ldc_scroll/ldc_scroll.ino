#include <LiquidCrystal.h>    // importa libreria

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);  // pines RS, E, D3, D2, D1, D0 de modulo 1602A

void setup() {
  lcd.begin(16, 2);     // inicializa a display de 16 columnas y 2 lineas
}

void loop() {
  lcd.setCursor(2, 0);      // ubica cursor en columna 2 y linea 0
  lcd.print("Prueba scroll");   // escribe texto
  lcd.scrollDisplayLeft();    // funcion que desplaza de a un caracter por vez hacia
          // la izquierda
  delay(1000);        // demora de un segundo
}
