#include <stdio.h>
#include <stdlib.h>

typedef struct{

        int legajo;
        char nombre[50];
        char apellido[50];
        }personas;

int main()
{
    personas arrayPersonas[200];

    arrayPersonas[1].legajo = 100;

    printf("%d",arrayPersonas[1].legajo);



}
