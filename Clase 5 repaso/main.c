#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


/*De los 100 empleados de una fábrica se registra número de legajo (coincidente con
el índice), edad y salario. Se pide ingresar los datos consecutivamente y calcular el sueldo
promedio.
*/

int main()
{
    /**************CARGA SECUENCIAL**************
    int i;
    int legajo[100];
    int iteraciones = 1;
    int edad [100];
    float salario [100];
    float sumaSalarios = 0;
    float promedioSalarios;
    char respuesta;

    for (i = 0; i < iteraciones; i++)
    {
        printf("Ingrese el numero de legajo cuyos datos desea cargar");
        legajo[i] = getInt();

        printf("Por favor, ingrese su edad: \n");
        edad[i] = getInt();

        printf("Por favor, ingrese su salario; \n");
        salario[i] = getFloat();

        sumaSalarios = sumaSalarios + salario[i];

        printf("Desea ingresar mas datos? presiones S para seguir cualquier otra tecla para salir \n");
        respuesta = getChar();

        if (respuesta == 's' || respuesta == 'S')
            {
                iteraciones++;
            }
    }

    promedioSalarios = calcularPromedio(sumaSalarios,iteraciones);

    printf("El promedio de los salarios ingresados es %.2f", promedioSalarios);

    /**************CARGA ALEATORIA (MAL HECHA POR PAJA XD)**************

    /

    int legajo;
    int edad[100];
    float salario[100];
    int mostrar;
    int seleccionLegajo;
    char respuesta;

    do{
        printf("Ingrese el numero de legajo a cargar: \n");
        legajo = getInt();

        printf("Ingrese la edad: \n");
        edad[legajo] = getInt();

        printf("Ingrese su salario: \n");
        salario[legajo] = getFloat();

        printf("El personal de legajo %d tiene %d anios y percibe %.2f \n", legajo, edad[legajo], salario[legajo]);

        printf("Desea ingresar otro dato? presione S para continuar. \n");
        respuesta = getChar();

        printf("Si desea mostrar los datos de un legajo presione 3 \n");
        mostrar = getInt();
        if (mostrar == 3)
        {
            printf("Ingrese el numero de legajo cuya informacion desea mostrar. \n");
            legajo = getInt();
            printf("El personal de legajo %d tiene %d anios y percibe %.2f \n", legajo, edad[legajo], salario[legajo]);
        }


    }while (respuesta == 's' || respuesta == 'S');

   */


   /**************BUSCAR EL MAYOR DENTRO DE UN ARRAY**************

  int mayor;
  int vector[5];
   int i;

   for (i = 0; i < 5; i++)
   {
       if (i == 0)
        mayor = 0;

       printf("Ingrese valor de la %d posicion: \n", i);
       vector[i] = getInt();

       if (vector[i] > mayor)
       {
           mayor = vector[i];
       }
   }

    printf("El valor mas grande ingresado fue el %d", mayor);

    */





    }
