#include <stdio.h>
#include <stdlib.h>
#include "eFecha.h"

typedef struct
    {
        int codigo;
        char nombre[51];
        char localidad[33];
        int isEmpty;
    }eEquipos;

    typedef struct
    {
        int codigo;
        char apellido[31];
        char nombre[31];
        eEquipos codigoEquipo;
        char sexo;
        eFecha fechanac;
        int isEmpty;
        }eJugadores;

void inicializarEquipo(eEquipos equipo[], int capacidad, int valor);
void cargarEquipo(eEquipos arrayEquipo[], int posicion, char nombreEquipo[], char localidadEquipo[]);
void ordenarEquipo(eEquipos equipo[], int capacidad);
void mostrarEquipo (eEquipos equipo[], int capacidad);
void cargarJugadores(eJugadores arrayJugadores[], int posicion, char apellido[], char nombre[], char sexo, int codigoEquipo);
