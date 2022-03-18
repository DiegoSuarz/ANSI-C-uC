/*
 ============================================================================
 Name        : 04_PUNTEROS_EJEMPLO.c
 Author      : Diego Suarez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h> //esta includo NULL

//#define NULL 0  //esto se usa si no se ha incluido la libreria stddef.h

int main(void) {

	int edad;
	void *ptr=NULL; //puntero generico, que apunta a cualquier tipo de dato, en este caso lo inicializamos vacio(NULL) (no apunta a ninguna direccion)
	ptr=&edad;


	int *ptr_edad=&edad;  //asignacion del puntero, los punteros siempre apuntan a un tipo determinado de dato, en este caso un entero (int)
	printf("Ejemplo de punteros\n");
	printf("Ingrese el valor de su edad\n");

	//scanf("%d",&edad);
	//printf("Valor de edad->%d\n",*ptr_edad);

	scanf("%d",ptr_edad);
	printf("Valor de edad->%d\n",edad);

	printf("Valor de edad(puntero generico):%d\n",*((int*)ptr)); //se usa cuando se declara un puntero generico, se necesita hacer un cast
	system("pause");
	return EXIT_SUCCESS;
}
