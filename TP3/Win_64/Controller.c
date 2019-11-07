#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"


/** \brief Carga los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromText(char* path , LinkedList* pArrayListEmployee)
{
    FILE* archivo = fopen(path, "r");
    if (archivo == NULL)
    {
        printf("Error al abrir el archivo \n");
        exit(0);
    }

    parser_EmployeeFromText(archivo,pArrayListEmployee);

    printf("Archivo cargado con exito \n");

    return 1;
}

/** \brief Carga los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromBinary(char* path , LinkedList* pArrayListEmployee)
{

    FILE* archivo = fopen(path, "rb");
    if (archivo == NULL)
    {
        printf("Error al abrir el archivo \n");
        exit(0);
    }

    parser_EmployeeFromText(archivo,pArrayListEmployee);

    printf("Archivo cargado con exito \n");

    return 1;
}

/** \brief Alta de empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_addEmployee(LinkedList* pArrayListEmployee)
{
    Employee *empleado;
    int len;
    int id;
    char idStr[25];
    char nombre[25];
    char horasTrabajadas[25];
    char sueldo[25];
    int sueldoInt;

    printf("Ingrese el nombre del empleado \n");
    scanf("%s", nombre);
    printf("Ingrese las horas trabajadas \n");
    scanf("%s",horasTrabajadas);
    printf("Ingrese el sueldo \n");
    scanf("%s",sueldo);

    id = controller_getMaxId(pArrayListEmployee,len);

    itoa(id,idStr,10);

    empleado = employee_newParametros(idStr,nombre,horasTrabajadas);
    sueldoInt = atoi(sueldo);
    employee_setSueldo(empleado,sueldoInt);
    ll_add(pArrayListEmployee,empleado);

    printf("Ha agregado al empleado id %d nombre %s horas trabajadas %d sueldo %d\n",empleado->id,empleado->nombre,empleado->horasTrabajadas, empleado->sueldo);

    return 1;
}

/** \brief Modificar datos de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_editEmployee(LinkedList* pArrayListEmployee)
{
    int id;
    int opcion;
    Employee *empleado;
    printf("Ingrese el ID del empleado a modificar \n");
    scanf("%d",&id);

    empleado = ll_get(pArrayListEmployee,id);

    do
    {
    printf("Seleccione una opcion:\n"
           "1 para editar nombre \n"
           "2 para editar horas trabajadas \n"
           "3 para editar salario \n"
           "4 para salir \n");
           scanf("%d",&opcion);

           switch (opcion)
           {
           case 1:
            system("cls");
            printf("Ingrese el nuevo nombre del empleado \n");
            scanf("%s",empleado->nombre);
            printf("Nombre cambiado exitosamente. \n");
            system("pause");
            system("cls");
            break;

           case 2:
            system("cls");
            printf("Ingrese el nuevo valor para horas trabajadas \n");
            scanf("%d", &empleado->horasTrabajadas);
            printf("Valor para horas trabajadas cambiado exitosamente  \n");
            system("pause");
            system("cls");
            break;

           case 3:
            system("cls");
            printf("Ingrese el nuevo valor para sueldo \n");
            scanf("%d", &empleado->sueldo);
            printf("Valor para sueldo cambiado exitosamente \n");
            system("pause");
            system("cls");
            break;

           }

    }while (opcion!=4);

    return 1;
}

/** \brief Baja de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_removeEmployee(LinkedList* pArrayListEmployee)
{
    int indice;

    printf("Ingrese el ID del empleado \n");
    scanf("%d", &indice);

    ll_remove(pArrayListEmployee,indice);

    printf("Exito! \n");

    return 1;
}

/** \brief Listar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_ListEmployee(LinkedList* pArrayListEmployee)
{
    int i;

    Employee *empleado;

    for (i=1;i<ll_len(pArrayListEmployee);i++)
    {
        empleado = ll_get(pArrayListEmployee,i);

        printf("%d %s %d %d \n", empleado->id, empleado->nombre, empleado->horasTrabajadas, empleado->sueldo);

    }

    return 1;
}

/** \brief Ordenar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_sortEmployee(LinkedList* pArrayListEmployee)
{
    int opcion;
    Employee *empleadoUno;
    Employee *empleadoDos;
    char aux[25];
    int i;
    int j;
    int len = ll_len(pArrayListEmployee);

    do
    {
    printf("Ingrese una opcion: \n"
           "1 ordenar por nombre \n"
           "2 ordenar por horas trabajadas \n"
           "3 ordenar por salario \n"
           "4 salir \n");
           scanf("%d",&opcion);

           switch (opcion)
           {
           case 1:
               for (i=1;i<len-1;i++)
               {
                    empleadoUno = ll_get(pArrayListEmployee,i);
                   for (j=i+1;j<len;j++)
                   {
                    empleadoDos = ll_get(pArrayListEmployee,j);
                       if (strcmp(empleadoUno->nombre,empleadoDos->nombre)>0)
                       {
                           strcpy(aux,empleadoDos->nombre);
                           strcpy(empleadoDos->nombre,empleadoUno->nombre);
                           strcpy(empleadoUno->nombre,aux);

                       }
               }
               }

               printf("Empleados sorteados exitosamente \n");
               break;

           }


    }while (opcion !=4);

    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsText(char* path , LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsBinary(char* path , LinkedList* pArrayListEmployee)
{
    return 1;
}

int controller_getMaxId (LinkedList* pArrayListEmployee)
{
    Employee* empleados;
    int i;
    int numeroMax = 0;
    int numero;
    int primeraVez = 1;

    for (i=1;i<ll_len(pArrayListEmployee);i++)
    {
        empleados = ll_get(pArrayListEmployee,i);
            if (primeraVez == 1)
            {
            numeroMax = empleados->id;
            primeraVez = 0;
            }

            if (primeraVez == 0 && empleados->id > numeroMax)
                numeroMax = empleados->id;
    }

    printf("El numero maximo es %d \n", numeroMax+1);

    return numeroMax+1;
}
