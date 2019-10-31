#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
    int option = 0;
    int i;
    Employee* empleadoQ = employee_new();
    Employee* empleadoW = employee_newParametros("2","Juanceli","6");

    empleadoQ->id = 1;
    strcpy(empleadoQ->nombre,"Ouchurus");
    empleadoQ->horasTrabajadas = 12;
    //printf("%d %s %d \n", empleadoQ->id,empleadoQ->nombre, empleadoQ->horasTrabajadas);


    //printf("%d %s %d", empleadoW->id,empleadoW->nombre, empleadoW->horasTrabajadas);

    LinkedList* listaEmpleados = ll_newLinkedList();

    ll_add(listaEmpleados,empleadoQ);
    ll_add(listaEmpleados,empleadoW);

    for (i=0; i<ll_len(listaEmpleados);i++)
    {
        Employee* empleados = ll_get(listaEmpleados,i);
        printf("%d | %s | %d \n",empleados->id,empleados->nombre,empleados->horasTrabajadas);

    }

    /*do{
        switch(option)
        {
            case 1:
                //controller_loadFromText("data.csv",listaEmpleados);
                break;
        }
    }while(option != 10);*/
    return 0;
}
