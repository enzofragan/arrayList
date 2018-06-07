#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
    int index;
    Employee* eA;
    Employee* eB;

    eA = (Employee*) pEmployeeA;
    eB = (Employee*) pEmployeeB;

    index = strcmp(eA->name,eB->name);

    return index;
}


void employee_print(Employee* this)
{

    printf("%d  %s   %s\n",this->id,this->name,this->lastName);
}


Employee* employee_new(void)
{

    Employee* returnAux = NULL;
    Employee* e1;
    char aux[51];
    e1 = (Employee*) malloc(sizeof(Employee));///cargar elementos
    /**printf("ingrese el id: ");
    scanf("%d",&e1->id);
    printf("ingrese el nombre: ");
    fflush(stdin);
    gets(aux);*/
    e1 -> id = 666;
    strcpy(e1->name,"luna");
    strcpy(e1->lastName,"gomez");
    e1 -> isEmpty = 1;
    ///strcpy(e1->name,aux);
    returnAux=e1;
    return returnAux;

}

void employee_delete(Employee* this)
{


}

int employee_setId(Employee* this, int id)
{

    return 0;

}

int employee_getId(Employee* this)
{

    return 0;

}


