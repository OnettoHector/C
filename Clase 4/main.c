#include <stdio.h>
#include <stdlib.h>
#include "Aritmetica.h"

/*int factorial (int);

int main()
{

    int resultado;

    resultado = factorial(5);

    printf("El factorial es %d",resultado)

    return 0;


int factorial(int numero)
{
    if (numero ==0)
    {
        resultado = 1;
    }
    else
    {
        resultado = numero * factorial(numero-1);
    }
}


*/



int pedirNum (char msj [], int numMin, int numMax);


int main()
{
    int edad = pedirNum("Ingrese edad: \n",1,100);
    int documento = pedirNum("Ingrese documento: \n",1,100000);
    int legajo = pedirNum("Ingrese legajo: \n",00,1000);
    int nota = pedirNum("Ingrese nota: \n",1,10);
    printf("%d---%d---%d---%d---", edad, documento, legajo, nota);

    return 0;
}

