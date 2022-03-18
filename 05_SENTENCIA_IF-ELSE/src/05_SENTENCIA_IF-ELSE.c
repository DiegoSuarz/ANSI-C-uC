/*
 ============================================================================
 Name        : 05_SENTENCIA_IF-ELSE.c
 Author      : Diego Suarez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

Se desarrolla el ejercicio numero 6, del tema4 parte 1


 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>

int main(void) {

	float x;
	float fx;

	printf("Ejemplo de sentencias condicionales\n");
	printf("f(x), ingrese x: ");
	scanf("%f",&x);

	if(x <= 0) fx=x+3;
	else fx = pow(x,2) + 2 * x;

	printf("\nf(%.2f) = %.2f\n",x,fx);

	system("pause");
	return EXIT_SUCCESS;
}
