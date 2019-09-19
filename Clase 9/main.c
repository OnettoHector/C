#include <stdio.h>
#include <stdlib.h>

char pedirString();
float pedirNumero();

typedef struct
{
    float dni;
    char nombre[50];
    char apellido[50];
}ePersona;

int main()

{
    int i = 0;

ePersona persona;
printf("Ingrese DNI \n");
persona.dni = pedirNumero();
printf("El DNI es %.0f \n",persona.dni);
printf("Ingrese nombre \n");
fflush(stdin);
persona.nombre[50] = pedirString();
printf("Ingrese apellido \n");
fflush(stdin);
persona.apellido[50] = pedirString();
printf("Su nombre y apellido es %s",persona.nombre[50]);//, persona.apellido[1]);

}

float pedirNumero ()
{
    float numero;
    scanf("%f",&numero);
    return numero;
}

char pedirString()
{
    char string;

    scanf("%s", string);
    return string;
}
