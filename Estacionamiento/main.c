#include <stdio.h>
#include <stdlib.h>
#include "estacionamiento.h"
#define CANT 4

// eFecha es una estructura que estamos haciendo para
// que sea parte de otra estructura. Va a ser parte de
// ePersona, pero está mal definirlo dentro de la estructura
// que lo contiene.

//DECLARACION DE ESTRUCTURAS
typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct
{
    float id;
    char nombre[12];
    eFecha fechaNac;
}ePersona;

typedef struct
{
    char patente [50];
    eFecha fechaIngreso;
    int horaIngreso;
    int horaSalida;
    int idDuenio;
}eVehiculo;

void hardcodearPersona (ePersona[], int);
void mostrarPersona (ePersona[], int);
void hardcodearVehiculos (eVehiculo[], int);
void mostrarVehiculo (eVehiculo[], ePersona[], int);

int main()
{
    ePersona persona [CANT];
    //eFecha fechas [CANT];
    eVehiculo vehiculos [4];

    hardcodearPersona (persona, CANT);
    mostrarPersona (persona, CANT);
    hardcodearVehiculos (vehiculos, 4);
    mostrarVehiculo (vehiculos, persona, 4);

    printf("\n\t Hello world!\n");
    return 0;
}

// ESTRUCTURA DE FUNCIONES

void hardcodearPersona (ePersona estasPersonas[], int cantidad)
{
    //ePersona es una estructura, estasPersonas (y luego persona) es un array de ePersonas hardcodeado


    int ids[] = {1,2,3,4};
    int dias [] = {33,22,25,11};
    int meses [] = {3,4,12,11};
    int anios [] = {1990,1980,2000,1995};
    char nombres [][32] = {"maria","zeke","ger","yani"};
    int i;
    for (i=0; i<cantidad; i++)
    {
        estasPersonas[i].id=ids[i];
        estasPersonas[i].fechaNac.anio=anios[i];
        estasPersonas[i].fechaNac.mes=meses[i];
        estasPersonas[i].fechaNac.dia=dias[i];
        strcpy(estasPersonas[i].nombre,nombres[i]);
    }

}

void mostrarPersona (ePersona semuestranPersonas [], int cantidad)
{
    int i;
    for (i=0; i<cantidad; i++)
    {
        printf ("\n El nombre es: %s ", semuestranPersonas[i].nombre);
        printf (" \t Dia: %02d ", semuestranPersonas[i].fechaNac.dia);
        printf (" \t Mes: %02d ", semuestranPersonas[i].fechaNac.mes);
        printf ("\t Anio: %04d \n\n", semuestranPersonas[i].fechaNac.anio);
    }
}

void hardcodearVehiculos (eVehiculo estosVehiculos [], int cantidad)
{
    //eVehiculo es una estructura, estosVehiculos (y luego vehiculos) es un array de eVehiculos hardcodeado

    int idDuenios[] = {1,2,2,4};
    int ingresos [] = {10,9,8,11};
    int salidas [] = {11,11,11,12};
    char patentes [][32] = {"AAA111","BBB222","AA111BB","OJ222BB"};
    //Para la fecha (todos hoy)
    int dias [] = {26,26,26,26};
    int meses [] = {9,9,9,9};
    int anios [] = {2019,2019,2019,2019};
    int i;
    for (i=0; i<cantidad; i++)
    {
        estosVehiculos[i].horaIngreso =ingresos[i];
        estosVehiculos[i].horaSalida =salidas[i];
        estosVehiculos[i].idDuenio =idDuenios[i];
        strcpy(estosVehiculos[i].patente,patentes[i]);

        estosVehiculos[i].fechaIngreso.anio=anios[i];
        estosVehiculos[i].fechaIngreso.mes=meses[i];
        estosVehiculos[i].fechaIngreso.dia=dias[i];
    }
}

void mostrarVehiculo (eVehiculo semuestranVehiculos [], ePersona estasPersonas[], int cantidad)
{
    int i;
    for (i=0; i<cantidad; i++)
    {
        printf (" \n  El vehiculo: %d ", semuestranVehiculos[i].patente);

        printf (" \Ingreso: %02d/%02d/%04d ",    semuestranVehiculos[i].fechaIngreso.dia,
                                                    semuestranVehiculos[i].fechaIngreso.mes,
                                                    semuestranVehiculos[i].fechaIngreso.anio);

        printf ("\t Desde las: %02d ", semuestranVehiculos[i].horaIngreso);
        printf (" Hasta a las: %02d \n\n", semuestranVehiculos[i].horaSalida);
        int j;
        for (j=0;j<CANT;j++)
        {
            if(semuestranVehiculos[i].idDuenio == estasPersonas[j].id)
            {
                printf ("Duenio: %s\n",estasPersonas[j].nombre);
                break;
            }
        }

        //printf ("\n Le duenie del vehiculo es: %s ", semuestranVehiculos[i].nombre);
    }
}




/*
LO PROXIMO Y AUN NO LLEGUE A PROBRAR

pedir datos por id


*/
