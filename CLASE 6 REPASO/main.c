#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    char palabra[50];

    printf("Ingrese lo que le pinte: \n");

    gets(palabra);

    printf("Su ingreso cuenta con las siguientes caracteristicas: \n");

    if ((soloNumeros(palabra) == 1))
        printf("Su ingreso contiene numeros. \n");

    if (soloLetras(palabra) == 1)
        printf("Su ingreso contiene letras. \n");

    if (soloAlfaNumerico(palabra) == 1)
        printf("Su ingreso contiene caracteres alfanumericos. \n");

    if (soloTelefonico(palabra) == 1)
        printf("Su ingreso contiene un numero telefonico. \n");


}
