#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    /*
    strlen
    strcpy
    strupr
    strlwr
    strcmp
    stricmp
    strcat



    char palabra[10];
    char palabra2[10];
    int comp;
    char todo[50];

    printf("Ingrese una palabra \n");

    //fgets(palabra,10,stdin);

    gets(palabra);

    strcpy(palabra2,"perro");

    strlwr(palabra);



    if (strcmp(palabra,palabra2) == 0)
    {
        printf("Son iguales\n");
    }
    else
    {
        printf("No son iguales\n");
    }

    //printf("%d",comp);

    strcat(todo,palabra);
    strcat(todo, palabra2);
    strcat (todo, "Chau");

    printf("Todo %s \n",todo);

    return 0;



    Vamos a trabajar con una variable "Nombre" de [15] caracteres
    Lo mismo de arriba con otro variable "Apellido"
    Otra variable "ApellidoNombre" de [?] caracteres
    Necesito la primer letra de cada palabra en mayuscula
    Despues del apellido una coma y el nombre
    No podemos modificar las variables (?
    */

    char apellido [15];
    char nombre [15];
    //char apellidoNombre [];

    gets (apellido);
    gets (nombre);

    //for (i=0, apellido < 15, i++)
        strupr(apellido[0]);
        strupr(nombre[0]);

        printf("%s %s",apellido,nombre);
}
