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
    int edadMujerMasVieja;
    int edadPersonMasJoven;
    int edadHombreMasBajo;
    int sumaEdades = 0;
    int contador = 0;
    int contadorEdades = 1;
    int contadorAlturaHombres = 0;
    int flag = 0;
    float altura;
    float alturaMujerMasVieja;
    float alturaPersonaMasJoven;
    float alturaHombreMasBajo;
    float alturaMaxima;
    float promedioEdades;
    float promedioAlturaHombres;
    float sumaAlturaHombres = 0;
    char sexo;
    char sexoPersonaMasAlta;
    char seguir = 's';

    while (seguir == 's')
    {
        printf("Ingrese  su edad (1-100) \n");
        scanf("%d",&edad);

        while (edad <1 || edad>100)
        {
            printf("Ingrese una edad correcta (de 1 a 100) \n");
            scanf("%d",&edad);
        }

        printf("Ingrese su altura \n");
        scanf("%f",&altura);

        while (altura <1 || altura >3)
        {
            printf("No se admiten microbios o gigantes \n");
            scanf("%f",&altura);
        }

        printf("Ingrese su sexo \n");
        fflush(stdin);
        scanf("%c",&sexo);

        while (sexo !='f' && sexo !='m')
        {
            printf("Aca somos todos binarios \n");
            fflush(stdin);
            scanf("%c",&sexo);
        }

        sumaEdades = edad + sumaEdades;

        if (sexo == 'f' && edad > edadMujerMasVieja || contador == 0)
        {
            alturaMujerMasVieja = altura;
            edadMujerMasVieja = edad;
        }
            else if (altura < alturaHombreMasBajo || flag == 0)
            {
                alturaHombreMasBajo = altura;
                edadHombreMasBajo = edad;
                flag = 1;
            }

        if (edad < edadPersonMasJoven || contador == 0)
        {
            alturaPersonaMasJoven = altura;
            edadPersonMasJoven = edad;
        }

        if (altura > alturaMaxima || contador == 0)
        {
            alturaMaxima = altura;
            sexoPersonaMasAlta = sexo;
        }

        if (sexo == 'm')
        {
            sumaAlturaHombres = altura + sumaAlturaHombres;
            contadorAlturaHombres++;
        }

        promedioEdades = (float)sumaEdades/(float)contadorEdades;

        promedioAlturaHombres = (sumaAlturaHombres/contadorAlturaHombres);

        contador++;
        contadorEdades++;

        }

        printf("la altura de la mujer mas vieja es: %f \n",alturaMujerMasVieja);

        printf("La altura de la persona mas joven es %f \n",alturaPersonaMasJoven);

        printf("El sexo de la persona mas alta es %c \n",sexoPersonaMasAlta);

        printf("La edad del hombre mas bajo es %d \n",edadHombreMasBajo);

        printf("El promedio de edades es %f \n",promedioEdades);

        printf("el promedio de altura de los hombres es %f",promedioAlturaHombres);

    }
