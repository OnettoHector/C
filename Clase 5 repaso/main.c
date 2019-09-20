#include <stdio.h>
#include <stdlib.h>

/*De los 100 empleados de una fábrica se registra número de legajo (coincidente con
el índice), edad y salario. Se pide ingresar los datos consecutivamente y calcular el sueldo
promedio.
*/

int main()
{
    int i;
    int edad [100];
    float salario [100];

    for (i = 0; i < 100; i++)
    {
        printf("Bienvenido, trabajador %d \n", i);
        printf("Por favor, ingrese edad ||| salario \n");
        scanf("%d %f",&edad[i],&salario[i]);

        printf("El trabajador Nº de legajo %d tiene  %d años y cobra %f dolarucos \n", i, edad[i], salario[i]);
    }
    }
