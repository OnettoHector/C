#include <stdio.h>
#include <stdlib.h>
#include "eEquipos.h"
#include "eJugadores.h"
#define MAX_QTY 100

    typedef struct
    {
        int codigo;
        char apellido[31];
        char nombre[31];
        char sexo;
        char eMail[31];
        eFecha fechanac;
    }eReferi;

    typedef struct
    {
        int codigo;
        eEquipos codigovisitante;
        eEquipos codigoLocal;
        eReferi codigoReferi;
        eFecha fecha;
    }ePartido;

int main()
{
    eEquipos equipo[MAX_QTY];
    eJugadores jugadores[MAX_QTY];

    inicializarEquipo(equipo,MAX_QTY,1);
    //inicializarArray(jugadores,MAX_QTY,1);

    cargarEquipo(equipo,0,"Linces","Canuelas");
    cargarEquipo(equipo,3,"LichKing","Rasganorte");
    cargarEquipo(equipo,8,"Perezosos","Thrallmar");
    cargarEquipo(equipo,2,"Thrall","Winterfell");



    cargarJugadores(jugadores,0,"Hellscream","Garrosh",'m',0);
    cargarJugadores(jugadores,0,"Dunfmyr","Illidan",'m',0);
    cargarJugadores(jugadores,0,"Menethil","Arthas",'m',0);
    cargarJugadores(jugadores,0,"Windrunner","Sylvanas",'m',0);


    int opcion = 0;

    printf("Bienvenido \n");

    while (opcion != 5)
    {

    opcion = getInt("Ingrese su opcion \n");

        switch (opcion)
        {

        case 1:

            ordenarEquipo(equipo,MAX_QTY);
            mostrarEquipo(equipo,MAX_QTY);
            break;



            }
            }

    return 0;
}
