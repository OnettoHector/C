#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float ingresoNumero ();
float areaCirculo (int radio);

float mostrar;

int main()
{

printf("Ingrese el area del circulo \n");
mostrar = areaCirculo(ingresoNumero());
printf("El area del circulo es %.2f",mostrar);
}


float ingresoNumero ()
{
    float numero;
    scanf("%f",&numero);
    return numero;
}

float areaCirculo (int radio)
{
    float operacion;

    operacion = 3.14*pow(radio,2);
    return operacion;
}
