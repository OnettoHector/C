#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Altura de la mujer mas vieja
    //Altura de la persona mas joven
    //Sexo de la persona mas alta
    //Edad del hombre mas bajo (Con un else y otro flag)
    //Promedio de edades (Promedio de edades es flotante) (Se debe castear, que es similar a parseInt)
    //(float)promedioEdades
    //Promedio de altura de hombres


    int edad;
    float altura;
    char sexo;
    char seguir;
    int edadMujerMasVieja;
    float alturaMujerMasVieja;
    int edadPersonaMasJoven;
    float alturaPersonaMasJoven;
    int flagVieja = 0;

    do
    {
        printf("Ingrese la edad (0-100): ");
        scanf("%d", &edad);

        while (edad <0 || edad >100)
        {
            printf("Reingrese la edad: ");
            scanf("%d", &edad);
        }
        printf("Ingrese la altura (1-2): ");
        scanf("%f", &altura);

        while (altura <1 || altura>2)
        {
            printf("Reingrese la altura: ");
            scanf("%f", &altura);
        }
        printf("Ingrese sexo (f-m): ");
        sexo = tolower(getche());
        printf("\n");

        while (sexo !='f' && sexo !='m')
        {
            printf("Reingrese sexo (f-m): ");
            sexo = tolower(getche());
        }

        if (sexo =='f')
        {
            if (flagVieja == 0 || edad > edadMujerMasVieja)
            {
                flagVieja = 1;
                alturaMujerMasVieja = altura;
            }
        }


        printf("Desea continuar? s/n ");
        seguir = tolower(getche());
        printf("\n");

    }
    while(seguir == 's');

    printf("La altura de la mujer mas vieja es: %f" ,alturaMujerMasVieja);
}
