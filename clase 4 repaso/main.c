#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utn.h"

int main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
    int numeroAleatorio = generarNumeroRandom();
// checkear que la funcion del numero aleatorio anda como el co�o
    printf("El numero generado es %d \n",numeroAleatorio);
    }

    //esqueletoJuego();
}

