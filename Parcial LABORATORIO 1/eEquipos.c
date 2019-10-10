#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "eEquipos.h"

void inicializarEquipo(eEquipos equipo[], int capacidad, int valor)
{
    int i;

    for (i = 0; i<capacidad; i++)
    {
        equipo[i].isEmpty = valor;
    }
}

void cargarEquipo(eEquipos arrayEquipo[], int posicion, char nombreEquipo[], char localidadEquipo[])
{
int i;
strcpy(arrayEquipo[posicion].nombre,nombreEquipo);
strcpy(arrayEquipo[posicion].localidad,localidadEquipo);
arrayEquipo[posicion].codigo = 1;
for (i = 0; i<posicion;i++)
{
if (arrayEquipo[posicion].codigo == arrayEquipo[posicion].codigo)
    arrayEquipo[posicion].codigo++;
    }
arrayEquipo[posicion].isEmpty = 0;
}

void cargarJugadores(eJugadores arrayJugadores[], int posicion, char apellido[], char nombre[], char sexo, int codigoEquipo)
{
strcpy(arrayJugadores[posicion].nombre,nombre);
strcpy(arrayJugadores[posicion].apellido,apellido);
arrayJugadores[posicion].sexo = sexo;
arrayJugadores[posicion].codigo = 1;
/*arrayJugadores[posicion].fechanac.dia = fNacDia;
arrayJugadores[posicion].fechanac.mes = fNacMes;
arrayJugadores[posicion].fechanac.anio = fNacAnio;
*/
arrayJugadores[posicion].isEmpty = 0;
}

void mostrarEquipo (eEquipos equipo[], int capacidad)
{
    int i;
    printf("\n Codigo de equipo |      Nombre de equipo      |   Localidad de equipo");
    for (i=0;i<capacidad;i++)
    {
        if (equipo[i].isEmpty == 0)
        {
            printf("\n| %d                      | %-s                    | %s | \n", equipo[i].codigo,equipo[i].nombre,equipo[i].localidad);
        }
    }
}

void ordenarEquipo(eEquipos equipo[], int capacidad)
{
    char ArrayAux[30];
    int i;
    int j;

    for (i = 0; i < capacidad; i++)
    {
        if (equipo[i].isEmpty == 0)
        {
            continue;
        }

    for (j=i+1; j < capacidad; j++)
    {
        if (equipo[j].isEmpty == 0)
        {
            continue;
        }

    if(strcmp(equipo[i].nombre,equipo[j].nombre)<0)
        {
            strcpy(ArrayAux,equipo[i].nombre);
            strcpy(equipo[i].nombre,equipo[j].nombre);
            strcpy(equipo[j].nombre,ArrayAux);

}

        }

    }
}
