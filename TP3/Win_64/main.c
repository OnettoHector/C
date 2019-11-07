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
    FILE *archivoEmpleadosTxt;
    int option = 0;
    int i;

    LinkedList* listaEmpleados = ll_newLinkedList();

    do{
            system("cls");
            printf("Ingrese una opcion \n"
                   "1: Cargar datos desde archivo (texto)\n"
                   "2: Cargar datos desde archivo (binario)\n"
                   "3: Dar de alta un empleado\n"
                   "4: Modificar datos de empleado\n"
                   "5: Dar de baja un empleado\n"
                   "6: Listar empleados\n"
                   "7: Ordenar empleados\n" //por todos los criterios disponibles
                   "8: Guardar datos de empleados en archivo (texto)\n"
                   "9: Guardar datos de empleados en archivo (binario)\n"
                   "10:Salir \n");

                    scanf("%d", &option);

        switch(option)
        {
            case 1:
                system("cls");
                controller_loadFromText("data.csv",listaEmpleados);
                system("pause");
                system("cls");
                break;

            case 2:
                system("cls");
                controller_loadFromBinary("data.bin.csv",listaEmpleados);
                system("pause");
                system("cls");
                break;

            case 3:
                system("cls");
                controller_addEmployee(listaEmpleados);
                break;

            case 4:
                system("cls");
                controller_editEmployee(listaEmpleados);
                break;

            case 5:
                system("cls");
                controller_removeEmployee(listaEmpleados); //ME DIJO QUE TIENE QUE SER BAJA LOGICA
                break;                                           //NO SE TOCA LA LINKEDLIST?


            case 6:
                system("cls");
                controller_ListEmployee(listaEmpleados);
                system("pause");
                system("cls");
                break;

            case 7:
                system("cls");
                controller_sortEmployee(listaEmpleados);
                break;

        }
    }while(option != 10);
    return 0;
}
