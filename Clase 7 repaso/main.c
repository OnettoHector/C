#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define MAX 200

/**
1) Realizar una agenda para guardar los datos de hasta 200 personas de las cuales se toman los siguientes datos:

Nombre
Apellido
Legajo (NO SE PUEDE REPETIR)
a- Realizar un programa con un menú de opciones para hacer altas , bajas y modificaciones (ABM) de una agenda.

b- Mostrar un listado ordenado por Apellido

*/

/*Me falta validar que no se pueda ingresar el mismo legajo sin antes darlo de baja.
tambien me falta ordenar los datos que se muestran al final por apellido
y alguna boludes mas seguro tambien.
*/



int main()
{
    int legajo[MAX];
    char nombre[MAX][50];
    char apellido[MAX][50];

    char legajoAux[50];
    char nombreAux[50];
    char apellidoAux [50];
    char confirmacion;
    int legajoAuxInt;
    int i;
    int respuesta = 0;

    inicializarArray(legajo,MAX,-1);

    printf("Bienvenido, por favor, seleccione una opcion: \n");

    printf("1 Dar de alta un dato \n");
    printf("2 Dar de baja un dato \n");
    printf("3 Modificar un dato \n");
    printf("4 Mostrar un dato");
    printf("5 Mostrar todos los datos cargados \n");
    printf("6 Salir \n");
    respuesta = getInt();

    while (respuesta !=6)
    {

    switch (respuesta)
    {
    case 1:
        printf("Por favor, ingrese el numero de legajo \n");
        fflush(stdin);
        gets(legajoAux);
        while (soloNumeros(legajoAux) == 0) //Valida si se trata de un numero.
        {
            printf("Solo se admiten numeros \n");
            gets(legajoAux);
        }
       legajoAuxInt = atoi(legajoAux);

        if (legajo[legajoAuxInt] != -1)
        {
                printf("Oops! la posicion esta tomada \n");
                break;
        }

       legajo[legajoAuxInt] = legajoAuxInt;

        printf("Por favor, ingrese un nombre \n");
        fflush(stdin);
        gets(nombreAux);
        while (soloLetras(nombreAux) == 0)
        {
            printf("Solo se admiten letras \n");
            gets(nombreAux);
        }

        strcpy(nombre[legajoAuxInt], nombreAux);

        printf("Por favor, ingrese un apellido \n");
        fflush(stdin);
        gets(apellidoAux);

        while (soloLetras(apellidoAux) == 0)
        {
            printf("Solo se admiten letras \n");
            gets(apellidoAux);
        }

        strcpy(apellido[legajoAuxInt],apellidoAux);

        printf("El legajo numero %d tiene el nombre de %s y se apellida %s \n",legajo[legajoAuxInt],nombre[legajoAuxInt],apellido[legajoAuxInt]);


        printf("Que desea hacer a continuacion? \n");
        respuesta = getInt();

        break;

        case 2:

        if (recorrerArray(legajo,MAX,-1) == 1)
        {
        printf("Por favor, ingrese el numero de dato que desea dar de baja \n");
        fflush(stdin);
        gets(legajoAux);
                while (soloNumeros(legajoAux) == 0) //Valida si se trata de un numero.
        {
            printf("Solo se admiten numeros \n");
            gets(legajoAux);
        }

        legajoAuxInt = atoi(legajoAux);

        if (legajo[legajoAuxInt] == -1)
        {
            printf("La posicion a modificar se encuentra vacia. Por favor, ingrese una posicion valida. \n");
            break;
        }

        printf("Esta seguro que desea dar de baja el legajo numero %d nombre %s apellido %s? (Ingrese S o N) \n", legajoAuxInt,nombre[legajoAuxInt], apellido[legajoAuxInt]);
        confirmacion = getChar();

       if (confirmacion != 'S' && confirmacion !='s')
        {
        printf("Se ha cancelado la baja del dato. \n");
        printf("Que desea hacer a continuacion? \n");
        respuesta = getInt();
        break;
        }

       legajo[legajoAuxInt] = -1;
       printf("Se ha dado de baja el dato de forma satisfactoria \n");
       printf("Que desea hacer a continuacion? \n");
       respuesta = getInt();

       break;

       }
       else
       {
           printf("No se han cargado datos aun. \n");
           printf("Que desea hacer a continuacion? \n");
           respuesta = getInt();
           break;
       }

        case 3:

            if (recorrerArray(legajo,MAX,-1) == 1)
        {
        printf("Por favor, ingrese el numero de dato que desea modificar \n");
        fflush(stdin);
        gets(legajoAux);
                while (soloNumeros(legajoAux) == 0) //Valida si se trata de un numero.
        {
            printf("Solo se admiten numeros \n");
            gets(legajoAux);
        }

        legajoAuxInt = atoi(legajoAux);

        if (legajo[legajoAuxInt] == -1)
        {
            printf("La posicion a modificar se encuentra vacia. Por favor, ingrese una posicion valida. \n");
            break;
        }

        printf("Va a modificar el legajo numero %d nombre %s apellido %s, confirmar?(Ingrese S o N) \n", legajoAuxInt,nombre[legajoAuxInt], apellido[legajoAuxInt]);
        confirmacion = getChar();

       if (confirmacion != 'S' && confirmacion !='s')
        {
        printf("Se ha cancelado la modificacion del dato. \n");
        printf("Que desea hacer a continuacion? \n");
        respuesta = getInt();
        break;
        }

       legajo[legajoAuxInt] = legajoAuxInt;

       printf("Por favor, ingrese un nombre \n");
        fflush(stdin);
        gets(nombreAux);
        while (soloLetras(nombreAux) == 0)
        {
            printf("Solo se admiten letras \n");
            gets(nombreAux);
        }

        strcpy(nombre[legajoAuxInt], nombreAux);

        printf("Por favor, ingrese un apellido \n");
        fflush(stdin);
        gets(apellidoAux);

        while (soloLetras(apellidoAux) == 0)
        {
            printf("Solo se admiten letras \n");
            gets(apellidoAux);
        }

        strcpy(apellido[legajoAuxInt],apellidoAux);
       printf("Se ha modificado el dato de forma satisfactoria \n");
       printf("El legajo numero %d ahora se llama %s %s \n", legajo[legajoAuxInt], nombre[legajoAuxInt], apellido[legajoAuxInt]);
       printf("Que desea hacer a continuacion? \n");
       respuesta = getInt();

       break;

       }
       else
       {
           printf("No se han cargado datos aun. \n");
           printf("Que desea hacer a continuacion? \n");
           respuesta = getInt();
           break;
       }


        case 4:

            if (recorrerArray(legajo,MAX,-1) == 1)
        {
        printf("Por favor, ingrese el numero de dato que desea mostrar \n");
        fflush(stdin);
        gets(legajoAux);
                while (soloNumeros(legajoAux) == 0) //Valida si se trata de un numero.
        {
            printf("Solo se admiten numeros \n");
            gets(legajoAux);
        }

        legajoAuxInt = atoi(legajoAux);

        if (legajo[legajoAuxInt] == -1)
        {
            printf("La posicion a modificar se encuentra vacia. Por favor, ingrese una posicion valida. \n");
            break;
        }

        printf("El legajo numero %d se llama %s y se apellida %s \n", legajo[legajoAuxInt], nombre[legajoAuxInt], apellido[legajoAuxInt]);
        printf("Que desea hacer a continuacion? \n");
           respuesta = getInt();
           break;

        }
        else
        {
            printf("No se han cargado datos aun. \n");
           printf("Que desea hacer a continuacion? \n");
           respuesta = getInt();
           break;
        }

        case 5:

        if (recorrerArray(legajo,MAX,-1) == 1)
        {

        for (i = 0; i < MAX; i++)
        {
            if (legajo[i] != -1)
                printf("El nombre y apellido del empleado legajo numero %d es %s %s \n", legajo[i], nombre[i], apellido[i]);
        }

                printf("Que desea hacer a continuacion? \n");
                respuesta = getInt();

        }
        else
        {
            printf("No se han cargado datos aun. \n");
           printf("Que desea hacer a continuacion? \n");
           respuesta = getInt();
           break;
        }



    }

    }

    }
