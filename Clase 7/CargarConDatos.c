#include <stdio.h>
#include <stdlib.h>
#include "CargarConDatos.h"
#include <string.h>


void cargarConDatosInt(int array [], int cantidad)
{
int aux[]={55,11,22,33};
int i;
for(i=0;i<cantidad;i++)
{
    array[i] = aux[i];
}
}

void cargarConDatosChar(char array[] [50], int cantidad)
{
    char aux [][50]= {"Pedro","Joan","Elrubius","Papadopoulos","Josefino"};
    int i;
    for (i=0;i<cantidad;i++)
    {
        strcpy(array[i], aux[i]);
    }
}

