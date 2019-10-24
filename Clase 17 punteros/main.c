#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"
#include "utn.h"
#include "arrays.h"

    typedef struct
    {
        int* orden;
        int* id;
        char apellido [31];
    }
    ePersona;


void inicializarPersona(ePersona* elArray, int capacidad, int valor);
void pedirDatos (ePersona* elArray, int id)
void swap (int* x, int* y);
void ordenarArray (int* array, int tam);

int main()
{
    ePersona persona[15];
    int numeroOrden;
    int i = 0;
    char respuesta = 's';

    inicializarPersona(persona,15,-1);
    while (respuesta == 's')
    {

            printf("Desea ingresar mas ordenes? \n");
            fflush(stdin);
            scanf("%c",&respuesta);
            /*if (respuesta == 'n')
            {
                ordenarArray(persona.arrayOrden, 15);
                mostrarArray(persona.arrayOrden, 15);

            }
            */
    }
        return 0;
}

void swap (int* x, int* y)
{
    int z;

    z = *x;
    *x = *y;
    *y = z;
}

void ordenarArray (int* array, int tam)
{
    int i;
    int j;

    for (i = 0; i<tam-1; i++)
        for (j = i+1; j<tam; j++)
        {
            if (*(array+i) > *(array+j))
                swap(array+i,array+j
                     );
        }
}

void inicializarPersona(ePersona* elArray, int capacidad, int valor)
{
    int i;

    for (i = 0; i<capacidad; i++)
    {
        (elArray+i)->id = valor;
    }
}

void pedirDatos (ePersona* elArray, int id)
{
    printf("Ingrese el apellido \n");
    gets(elArray->apellido);
    printf("Ingrese el numero de orden \n");

}

int buscarFreeSpace(ePersona* elArray, int capacidad)
{
int i;

for (i = 0; i < capacidad; i++)
{
    if ((elArray+i)->id == -1)/*Valor en uno porque si se usa un isEmpty 1 seria true*/) //Esto se reemplaza por un isEmpty, en 1 esta vacio, en 0 ocupado.
    {
        return i;
    }
}
    return -1;int buscarLugarLibre(int elArray[], int capacidad)
{
int i;

for (i = 0; i < capacidad; i++)
{
    if (elArray[i] == 1/*Valor en uno porque si se usa un isEmpty 1 seria true*/) //Esto se reemplaza por un isEmpty, en 1 esta vacio, en 0 ocupado.
    {
        return i;
    }
}
    return -1;

}

}
