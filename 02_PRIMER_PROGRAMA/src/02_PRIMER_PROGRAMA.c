/*
 ============================================================================
 Name        : 02_PRIMER_PROGRAMA.c
 Author      : Diego Suarez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define	PI	3.14159

int main(void) {


	float radio;		//variable que representa el radio de un circulo
	float area;			//para almacenar el area calculada

	printf("\t->AREA DE UN CIRCULO<-");
	//LEER EL VALOR DEL RADIO
	printf("Ingrese el radio(>0): ");
	scanf("%f",&radio); //paso por referencia
	// & -> direccion (obtiene la direccion de memoria donde se almacena una variable
	// * -> indireccion

	/*calculo de area*/
	area= 2*PI* pow(radio,2);
	/*Imprimir el resultado¬®*/
	printf("Area-> %3.2f\n ",area);
	system("pause");
	return EXIT_SUCCESS;
}
