/*
 ============================================================================
 Name        : 07_BUCLE_DO_WHILE.c
 Author      : Diego Suarez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {

	int8_t numTerminos;
	int8_t terminos = 5;

	printf("SERIE DE MULTIPLOS DE 5\n");

	do{
		printf("\ningrese la cantidad de terminos (0>): ");
		scanf("%c",&numTerminos);
	}while(numTerminos<=0);

	while(numTerminos>0){
		terminos +=5;
		printf("%d",terminos);
		if(numTerminos != 1) printf(" ,");
		numTerminos--;
	}
	printf("\n");

	system("pause");
	return EXIT_SUCCESS;
}
