#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include <time.h>

int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}

void getString(char mensaje[],char input[])
{
    printf("%s",mensaje);
    scanf ("%s", input);
}


float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}

int esNumericoFlotante(char str[])
{
   int i=0;
   int cantidadPuntos=0;
   while(str[i] != '\0')
   {
       if (str[i] == '.' && cantidadPuntos == 0)
       {
           cantidadPuntos++;
           i++;
           continue;

       }
       if(str[i] < '0' || str[i] > '9')
           return 0;
       i++;
   }
   return 1;
}

int getStringNumerosFlotantes(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esNumericoFlotante(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
    return auxiliar;
}



float calcularPromedio (float dividendo,int divisor)
{
    float promedio;

    promedio = dividendo/divisor;

    return promedio;
}

int generarNumeroRandom()
{
    int numeroRandom;

    srand(time(NULL)); //Si esto se mete dentro de un loop para crear varios numeros random diferentes, hay que declarar SRAND fuera de el loop o da siempre el mismo (es decir, comentar esta linea)

    numeroRandom = rand() %100 +1; //El 100 determina el limite, pero como incluye el 0 hay que hacer +1 para que incluya el 100



    return numeroRandom;
}

