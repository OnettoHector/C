#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Pide un entero al usuario y lo devuelve
 * \return El entero ingresado por el usuario
 */

int getInt(char mensaje[]);

/**
 * \brief Solicita un numero entero al usuario y lo valida
 * \param requestMessage Es el mensaje a ser mostrado para solicitar el dato
 * \param requestMessage Es el mensaje a ser mostrado en caso de error
 * \return El número ingresado por el usuario
 *
 */
int getValidInt(char requestMessage[],char errorMessage[], int lowLimit, int hiLimit);

/**
 * \brief Pide un float al usuario y lo devuelve
 * \return El float ingresado por el usuario
 */

float getFloat();

/**
 * \brief Verifica si el valor recibido es numérico aceptando flotantes
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */
int esNumericoFlotante(char str[]);

/**
 * \brief Pide el ingreso de un caracter al usuario y lo devuelve
 * \return El caracter ingresado por el usuario
 */
char getChar();

 /**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return void
 */
 void getString(char mensaje[],char input[]);

 /**
 * \brief Solicita un string
 * \param requestMessage Es el mensaje a ser mostrado para solicitar el dato
 * \param requestMessage Es el mensaje a ser mostrado en caso de error
 * \param input Array donde se cargará el texto ingresado
 * \return -
 *
 */
void getValidString(char requestMessage[],char errorMessage[], char input[]);

/**
  * \brief Toma dos valores y calcula el promedio del primero dividido el segundo
  * \param El dividendo
  * \param El divisor
  * \return El cociente
 */

 /**
 * \brief Solicita un texto numérico al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int getStringNumeros (char mensaje[],char stringAux[]);

/**
 * \brief Solicita un texto numérico al usuario y lo devuelve (acepta flotantes)
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int getStringNumerosFlotantes(char mensaje[],char input[]);

 float calcularPromedio (float , int);

/**
 * \brief Genera un numero random (maximo 100) y lo devuelve
 * \return Numero aleatorio (maximo 100)
 */

int generarNumeroRandom();



