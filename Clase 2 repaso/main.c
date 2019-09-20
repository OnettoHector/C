#include <stdio.h>
#include <stdlib.h>

int numero;

int main()
{
   int i;
   int numero;
   int numeroMaximo;
   int numeroMinimo;
   int sumaNumeros = 0;
   float promedioNumeros;

   for (i = 0; i<5; i++)
{
    printf("Por favor, ingrese un numero: \n");
    scanf("%d" ,&numero);
    sumaNumeros = sumaNumeros + numero;

    if (i == 0 || numero > numeroMaximo)
    {
        numeroMaximo = numero;
    }

    if (i == 0 || numero < numeroMinimo)
    {
        numeroMinimo = numero;
    }

}

promedioNumeros = (float)sumaNumeros / 5;

printf("El numero maximo es: %d \n",numeroMaximo);
printf("El numero minimo es: %d \n",numeroMinimo);
printf("El promedio es: %.2f \n",promedioNumeros);


}
