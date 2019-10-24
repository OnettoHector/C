#include "validaciones.h"

int soloNumeros(char strg[])
{
    int i=0;

    while (strg[i] != '\0')
    {
        if (strg[i] < '0' || strg[i] > '9')
        {
            return 0;
        }
        i++;
    }
            return 1;

}

int soloLetras(char strg[])
{
    int i=0;

    while (strg[i] != '\0')
    {
        if (strg[i] != ' ' && (strg[i] <'a' || strg[i] >'z') && (strg[i] < 'A' || strg[i] > 'Z'))
    {
        return 0;
    }
    i++;

    }

        return 1;

    }

int soloAlfaNumerico(char strg[])
{
    int i = 0;

    while (strg[i] != '\0')
    {
        if ((strg[i] < '0' || strg[i] > '9') && strg[i] != ' ' && (strg[i] < 'a' || strg[i] > 'z') && (strg[i] < 'A' || strg[i] > 'Z'))
        {
            return 0;
        }

        i++;
    }
    return 1;
}

int soloTelefonico(char strg[])
{
    int i = 0;
    int contadorGuiones = 0;

    while (strg[i] != '\0')
    {
        if ((strg[i] != ' ') && (strg[i] != '-') && (strg[i] < '0' || strg[i] > '9'))
        return 0;

        if (strg[i] == '-'){
            contadorGuiones = 1;
            return 1;
            }

        i++;
    }
    return 0;
}
