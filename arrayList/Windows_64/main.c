#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "Employee.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{

    ArrayList* lista;
    int intAux;
    int i;
    lista=al_newArrayList();
    Employee* e1;
    Employee* e2;
    Employee* eAux;
    if(e1!=NULL)
    {
        e1 = (Employee*) malloc(sizeof(Employee));///cargar elementos
        e1 -> id = 666;
        strcpy(e1->name,"juan");
        strcpy(e1->lastName,"gomez");
        e1 -> isEmpty = 1;
        e2 = (Employee*) malloc(sizeof(Employee));///cargar elementos
        e2 -> id = 777;
        strcpy(e2->name,"luna");
        strcpy(e2->lastName,"triger");
        e2 -> isEmpty = 2;
        al_add(lista, e1);
        al_add(lista, e2);
        intAux=al_len(lista);///mostrar cantidad de elementos
        printf("%d\n",intAux);
        for(i=0;i<2;i++)
        {
          eAux = (Employee*) al_get(lista,i);///conseguir el elemento del array
          employee_print(eAux);///mostrar valores de elemento
        }
    }
    return 0;
}
