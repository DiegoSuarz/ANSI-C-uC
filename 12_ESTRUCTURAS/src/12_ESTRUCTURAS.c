/*
 ============================================================================
 Name        : 12_ESTRUCTURAS.c
 Author      : Diego Suarez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//
typedef struct {
	char nombre[50];
	char apellidos[50];
	int edad;
	float altura;
}persona;

//declaracion de variables de estructura
persona Diego;

typedef persona *ptrPersona;
ptrPersona Rob;


/********************************************************/
ptrPersona InfoPersona_ptr(void);
void InfoPersona(void);
int main(void) {


	//InfoPersona();
	Rob=InfoPersona_ptr();
	printf("nombre: %s",Rob->nombre);
	system("pause");
	return EXIT_SUCCESS;
}

void InfoPersona(void){
	printf("Ingrese información del Usuario\n");
	printf("Nombre: ");
	scanf("%s",Diego.nombre);
	printf("\nApellido: ");
	scanf("%s",Diego.apellidos);
	printf("\nAltura: ");
	scanf("%f",&Diego.altura);
	printf("\nEdad: ");
	scanf("%d",&Diego.edad);
	return;
}

ptrPersona InfoPersona_ptr(void){  //devuelve un dato tipo puntero

	ptrPersona xPersona;
	printf("Ingrese información del Usuario\n");
	printf("Nombre: ");
	scanf("%c",xPersona->nombre);
	printf("\nApellido: ");
	scanf("%c",xPersona->apellidos);
	printf("\nAltura: ");
	scanf("%f",&xPersona->altura);
	printf("\nEdad: ");
	scanf("%d",&xPersona->edad);
	return xPersona;
}
