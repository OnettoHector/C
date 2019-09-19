#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int getInt()
{
    int numeroInt;

    scanf("%d", &numeroInt);
    return numeroInt;
}

float getFloat()
{
    float numeroFloat;

    scanf("%f", &numeroFloat);
    return numeroFloat;
}

char getChar()
{
    char caracterChar;

    scanf("%c",caracterChar);
    return caracterChar;
}

char continuarJugando()
{
            int continuar;
            printf("Desea continuar? Presione S \n");
            fflush(stdin);
            continuar = getchar();
            return continuar;
}

int generarNumeroRandom()
{
    int numeroRandom;

    time_t t;
    srand((unsigned) time(&t));

    numeroRandom = rand() %100 +1;

    return numeroRandom;
}

void esqueletoJuego()
{
    int numeroIngresado;
    int numeroRandom;
    int i;

    numeroRandom = generarNumeroRandom();

    do
    {
        printf("Ingrese su numero: \n");
        numeroIngresado = getInt();

        if (numeroIngresado < numeroRandom)
        {
            printf("El numero ingresado es menor al numero random. \n");
            i = continuarJugando();
        }
        if (numeroIngresado > numeroRandom)
        {
            printf("El numero ingresado es mayor al numero random. \n");
            i = continuarJugando();
        }
        if (numeroIngresado == numeroRandom)
        {
            printf("Felicitaciones, ha ganado! \n");
            i = 'n';
        }

    }while (i == 's' || i == 'S');
}
