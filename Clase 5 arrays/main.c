#include <stdio.h>
#include <stdlib.h>

// int cargaSecuencialDeArray (int miArrayDos, int cantidadDos);

void MostrarArray (int myArray[], int cantidad);

int main()
{
    /*int i;
    int edad;
    int edadMenor;
    int Edadmayor;
    int listadoDeEdades [10];


    for (i=0; i<10; i++ )
    {
        printf("Ingrese edad \n");
        scanf("%d", &edad);
        if (i==0 || edad < edadMenor)
    {
        edadMenor = edad;
    }

    if (i==0 || edad > Edadmayor)
    {
        Edadmayor = edad;
    }
        listadoDeEdades[i]=edad;
    }

    for (i=0; i<10; i++)
    {
        printf("El listado de edades es %d \n", listadoDeEdades[i]);
    }
    printf("La edad menor es %d \n",edadMenor);
    printf("La edad mayor es %d",Edadmayor);
    */

    MostrarArray(5,5);
}

 void MostrarArray (int myArray[], int cantidad)
{
    int i;
    int valor;
    cantidad = 5;
    for (i=0;i<cantidad;i++)
    {
        //printf("Ingrese valor: \n");
        //scanf("%d",myArray);
        //printf("Ingrese cantidad: \n");
        //scanf("%d",cantidad);
        printf("El listado de algo es %d \n", myArray[i]);
        /*printf("Ingrese array \n");
        scanf("%d", &myArray);
        printf("Ingrese cantidad \n");
        scanf("%d,",&cantidad);
        printf("%d",myArray[cantidad]);
        */
    }
    //for (i=0; i<cantidad; i++)
    //{
    //}
}

/* int cargaSecuencialDeArray (int miArrayDos, int cantidadDos);
{
    int i;
    for (i=0;i < cantidad; i++)
    {
        printf("Ingrese la edad %d: \n",i+1);
        scanf ("%d", &miArrayDos[i]);
    }
}
*/
