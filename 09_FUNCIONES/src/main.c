/*
 ============================================================================
 Name        : 09_FUNCIONES.c
 Author      : Diego Suarez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main(void) {

	int a,b,resultado;

	a = ingresoNumPasoPorValor();
	ingresoNumPasoPorReferencia(&b);

	resultado = suma(a, b);  //paso por valor (crea una copia de cada variable que pasa a los argumentes (a,b))

	printf("\nLA SUMA ES -> %d\n",resultado);

	system("pause");
	return EXIT_SUCCESS;
}
