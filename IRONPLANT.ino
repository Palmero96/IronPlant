/*Programa diseñado para el control del robot IRON PLANT por Álvaro Palmero Martínez
 * y Ignacio Rodríguez Naranjo empezado el dia 09/10/2018. Se trata de la segunda
 * versión del programa con el mismo fin, aunque será rehecho desde scratch.
 */

//*********DECLARACION DE LAS VARIABLES**************************

#define POT1 A0
#define POT2 A1

float angulo1, angulo2;


//*********INICIALIZACION DE LAS VARIABLES***********************

void setup() {
  Serial.begin(9600);
}


//*************INICIO DEL PROGRAMA*******************************


void loop() {
  angulo1 = map(analogRead(POT1), 0, 1023, 12.5, 167.5);
  angulo2 = map(analogRead(POT2), 0, 1023, 12.5, 167.5);
  
  Serial.print(angulo1);
  Serial.print("\t");
  Serial.println(angulo2);
  delay(1000);
}
