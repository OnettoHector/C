#include <stdio.h>
#include <stdlib.h>
#include "CargarConDatos.h"
#define tam 5


int main()
{
    int edad [5];
    int i;
    char nombres [5][50];

    cargarConDatosInt(edad,tam);
    cargarConDatosChar(nombres,tam);

    for (i = 0;i<tam;i++)
    {
        printf("La edad es %d y el nombre es %s \n",edad[i], nombres [i]);
    }






















    /*int edades [5];

    char nombres [5] [50];

    int i;

    for (i = 0; i<tam;i++)
    {
        printf("Ingrese edad \n");
        scanf("%d", &edades[i]);
        printf("Ingrese nombres \n");
        fflush(stdin);
        gets(nombres[i]);
    }
    for (i = 0; i<tam;i++)
    {
        printf("La edad del indice numero %d es %d y su nombre es %s \n", i, edades[i],nombres[i]);
    }

    */
}
