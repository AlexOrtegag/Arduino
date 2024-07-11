#include <Key.h>  // importa libreria Keypad
#include <Keypad.h>

const byte filas = 4;// define numero de filas
                      // se declara un vector de 4 pociones byte para definir que son 4 pocisiones
                      //const estamos estableciondo que solo son 4 variables y ya no se puede modificar mediad de seg
const byte columnas=4; // define numero de columnas
 
 char keys[filas][columnas]=
 {
 {'1','2','3','A'},
 {'4','5','6','B'},// se define la distribucion del teclado
 {'7','8','9','C'},
 {'*','0','#','D'},
 };
 
 byte pinFilas[filas]={9,8,7,6 };//pines a donde estan conectado las filas array
 byte pinColumnas[columnas]={5,4,3,2 };;//pines a donde estan conectado las columnas array
 
 Keypad teclado= Keypad(makeKeymap(keys),pinFilas,pinColumnas,filas,columnas);// se crea
   //el objeto teclado del tipo keypad con todas la variables ya mencionadas

char Tecla; // almacena la tecla presionada
char Clave[7];// almacena en un array 6 digitos ingresados
char ClaveMaestra[7]="123456";// almacena en un array la contraseña maestra
byte indice=0;// indice del array


void setup()
{
  Serial.begin(9600); // inicializa comunicacion serie
}

void loop(){
  Tecla = teclado.getKey();   // obtiene tecla presionada y asigna a variable
  if (Tecla)        // comprueba que se haya presionado una tecla
  {
    Clave[indice] = Tecla;    // almacena en array la tecla presionada
    indice++;       // incrementa indice en uno
    Serial.print(Tecla);    // envia a monitor serial la tecla presionada
  }

  if(indice == 6)       // si ya se almacenaron los 6 digitos
  {
    if(!strcmp(Clave, ClaveMaestra))   // compara clave ingresada con clave maestra
      Serial.println(" Correcta");  // imprime en monitor serial que es correcta la clave
    else
      Serial.println(" Incorrecta");  // imprime en monitor serial que es incorrecta la clave

    indice = 0;
  }
}

