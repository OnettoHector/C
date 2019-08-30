#include <stdio.h>
#include <stdlib.h>

int pedir ();
float calcularArea (int radio);

int main()
{
    int numero;
    float resultado;
    numero = pedir();
    resultado = calcularArea(numero);
    printf("El area del circulo es: %.2f \n",resultado);
    return 0;
}

int pedir ()
{
    int pedido;
    printf("Ingrese un numero \n");
    scanf("%d",&pedido);
    return (pedido);
}

float calcularArea(int radio)
{
    float resultado;
    resultado = 3.14 * radio * radio;
    return (resultado);

}
