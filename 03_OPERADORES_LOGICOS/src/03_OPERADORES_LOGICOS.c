/*
 ============================================================================
 Name        : 03_OPERADORES_LOGICOS.c
 Author      : Diego Suarez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

bool res;
bool valor;

uint8_t ch;
uint8_t a,b,c;
int main(void) {

	printf("OPERADORES LOGICOS Y RELACIONALES\n");
	ch = 'c';

	res=(ch == 'c');
	printf("RES -> %d\n",res);

	a=3;b=5;c=10;

	valor = (!((a+b)>(c-b))&&(a*b<c*a));
	printf("VALOR -> %d\n",valor);

	system("pause");
	return EXIT_SUCCESS;
}
