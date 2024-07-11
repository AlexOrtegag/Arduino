//Programa que obtiene el UID de la tarjeta o llavero del kit RFID RC522, compara con
//valores previos obtenidos de UID y permite acceso con texto en monitor serie de bienvenida
//Cualquier otra tarjeta o llavero no listado muestra texto de No te conozco, es decir,
//acceso denegado. Requiere instalar libreria MFRC522


#include <SPI.h>// incluye libreria bus SPI
#include <MFRC522.h>// incluye libreria especifica para MFRC522

#define rst_pin 5// constante para referenciar pin de reset
#define ss_pin 10// constante para referenciar pin de slave select

MFRC522 mfrc522(ss_pin,rst_pin);// crea objeto mfrc522 enviando pines de slave select y reset

byte lecturauid[4];// crea array para almacenar el UID leido
byte usuario1[4] = {0xE6, 0x77, 0x48, 0xF4}; // UID de tarjeta leido en programa 1
byte usuario2[4] = {0x57, 0x0A, 0xCB, 0x26};// UID de llavero leido en programa 1
void setup()
{
  Serial.begin(9600);// inicializa comunicacion por monitor serie a 9600 bps
  SPI.begin();// inicializa bus SPI
  mfrc522.PCD_Init();// inicializa modulo lector
  Serial.println("listo");// Muestra texto Listo
}

void loop()
{
  if( ! mfrc522.PICC_IsNewCardPresent())// si no hay una tarjeta presente
      return;// retorna al loop esperando por una tarjeta

  if( ! mfrc522.PICC_ReadCardSerial())// si no puede obtener datos de la tarjeta
      return;// retorna al loop esperando por otra tarjeta

  Serial.print("IUD:");// muestra texto UID:
  for(byte i = 0; i < mfrc522.uid.size; i++)// bucle recorre de a un byte por vez el UID
  {
    if(mfrc522.uid.uidByte[i] < 0x10)// si el byte leido es menor a 0x10
    {
      Serial.print(" 0");// imprime espacio en blanco y numero cero
    }
    else// sino
    {
      Serial.print("  ");// imprime un espacio en blanco
    }
    Serial.print(mfrc522.uid.uidByte[i],HEX);// imprime el byte del UID leido en hexadecimal 
    lecturauid[i] = mfrc522.uid.uidByte[i]; // almacena en array el byte del UID leido
  } 

    Serial.print("\t");// imprime un espacio de tabulacion  

    if(comparauid(lecturauid, usuario1))// llama a funcion comparaUID con Usuario1
        Serial.println("bienvenido usuario 1");// si retorna verdadero muestra texto bienvenida
        else if(comparauid(lecturauid, usuario2))// llama a funcion comparaUID con Usuario2
            Serial.println("bienvenido usuario 2");// si retorna verdadero muestra texto bienvenida
              else// si retorna falso
                Serial.println("no te conosco");// muestra texto equivalente a acceso denegado  
          
        mfrc522.PICC_HaltA();// detiene comunicacion con tarjeta
}

boolean comparauid(byte lectura[], byte usuario[])// funcion comparaUID
{
  for (byte i = 0; i < mfrc522.uid.size; i++)// bucle recorre de a un byte por vez el UID
  {
    if (lectura[i] != usuario[i])// si byte de UID leido es distinto a usuario
      return(false);// retorna falso
  }
  return(true);// si los 4 bytes coinciden retorna verdadero
}
