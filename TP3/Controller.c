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
    char nombre[25];
    char horasTrabajadas[25];
    char sueldo[25];

    printf("Ingrese el nombre del empleado \n");
    scanf("%s", nombre);
    printf("Ingrese las horas trabajadas \n");
    scanf("%s",horasTrabajadas);
    printf("Ingrese el sueldo \n");
    scanf("%s",sueldo);

    len = ll_len(pArrayListEmployee);

    id = empleado[len].id;
    id+1; //hacer una funcion que me busque el maximo id y ya le sumo +1 ahi

    empleado = employee_newParametros(id,nombre,horasTrabajadas);
    employee_setSueldo(empleado,suelempleado[len].iddo);
    ll_add(pArrayListEmployee,empleado);

    printf("Ha agregado al empleado id %d nombre %s horas trabajads %d sueldo %d",empleado->id,empleado->nombre,empleado->horasTrabajadas, empleado->sueldo);

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

