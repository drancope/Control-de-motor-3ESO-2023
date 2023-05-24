/************ main.cpp
 *  auth: Antonio Contreras
 *  lic: copyleft
*/

/************  TAREAS POR EXPLORAR
 *  1- Comprobar que se puede compilar en las dos plataformas
 *  2- Añadir las bibliotecas para conexión serie
 *  3- Configurar el ordenador con un programa de comunicación serie que conecte al mqtt
*/
#include <Arduino.h>

// PINES de ENTRADA y SALIDA
#define MOT_ENCENDIDO 2
#define MOT_DIRECCION 12 // Cambiar éste y los siguientes para coincidir con microbit
#define BOT_ENCENDIDO 8
#define BOT_DIRECCION 9
#define SERIE_TX 0
#define SERIE_RX 1

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}