#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include <time.h>

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

    fflush (stdin);
    scanf("%c",&caracterChar);
    return caracterChar;
}

float calcularPromedio (float dividendo,int divisor)
{
    float promedio;

    promedio = dividendo/divisor;

    return promedio;
}

char continuarJugando()
{
            int continuar;
            printf("Desea continuar? Presione S para seguir || cualquier otra tecla para salir. \n");
            fflush(stdin);
            continuar = getchar();
            return continuar;
}

int generarNumeroRandom()
{
    int numeroRandom;

    srand(time(NULL)); //Si esto se mete dentro de un loop para crear varios numeros random diferentes, hay que declarar SRAND fuera de el loop o da siempre el mismo (es decir, comentar esta linea)

    numeroRandom = rand() %100 +1; //El 100 determina el limite, pero como incluye el 0 hay que hacer +1 para que incluya el 100



    return numeroRandom;
}

void esqueletoJuego()
{
    int numeroIngresado;
    int numeroRandom;
    int primeraVez = 1;
    int i = 's';

    do
    {
        if (primeraVez == 1)
        {
        numeroRandom = generarNumeroRandom();
        printf("Ingrese su numero: \n");
        numeroIngresado = getInt();
        primeraVez = 0;
        }

        if (numeroIngresado < numeroRandom)
        {
            printf("El numero ingresado es menor al numero random. \n");
            printf("Ingrese su numero: \n");
            numeroIngresado = getInt();
        }
        if (numeroIngresado > numeroRandom)
        {
            printf("El numero ingresado es mayor al numero random. \n");
            printf("Ingrese su numero: \n");
            numeroIngresado = getInt();
        }
        if (numeroIngresado == numeroRandom)
        {
            printf("Felicitaciones, ha ganado! \n");
            i = continuarJugando();
            primeraVez = 1;
        }

    }while (i == 's' || i == 'S');
}
