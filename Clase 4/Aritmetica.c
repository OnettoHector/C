#include <stdio.h>
#include "Aritmetica.h"

int pedirNum(char msj[], int numMin, int numMax)
{
    int unNumero;
    printf("%s",msj);
    scanf("%d",&unNumero);
    while (unNumero < numMin || unNumero > numMax)
    {
        printf("Numero incorrecto");
        scanf("%d",&unNumero);
    }
    return unNumero;
}


