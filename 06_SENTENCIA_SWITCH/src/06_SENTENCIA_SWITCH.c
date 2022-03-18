/*
 ============================================================================
 Name        : 06_SENTENCIA_SWITCH.c
 Author      : Diego Suarez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 Ejemplo N° 13 del bloque de ejercicios tema 4 parte 1

 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>

	uint8_t selector;
	float area;
	uint32_t base,base2;
	uint32_t altura;

int main(void) {



	printf("CALCULO DE AREAS\n");
	printf("-----------------\n");
	printf("1.- Calcular area de triangulo\n");
	printf("2.- Calcular area de trapecio\n");
	printf("3.- Calcular area de rectangulo\n");
	printf("opcion->");
	scanf("%u",&selector);

	switch(selector){
		case 1:	printf("AREA DEL TRIANGULO\n");
				printf("BASE: ");
				scanf("%d",&base);
				printf("ALTURA: ");
				scanf("%d",&altura);
				area=(float) (base*altura)/2;
				break;

		case 2: printf("AREA DEL TRAPECIO\n");
				printf("BASE MAYOR: ");
				scanf("%d",&base);
				printf("BASE MENOR: ");
				scanf("%d",&base2);
				printf("BASE ALTURA: ");
				scanf("%d",&altura);
				area=(float) ((base+base2)/2)*altura;
				break;

		case 3:	printf("AREA DEL RECTANGULO\n");
				printf("BASE MAYOR: ");
				scanf("%d",&base);
				printf("BASE ALTURA: ");
				scanf("%d",&altura);
				area=(float) base*altura;
				break;

		default: printf("LA SELECCION NO ES VALIDA");

	}

	if(area>0) printf("AREA -> %.2f\n",area);

	system("pause");
	return EXIT_SUCCESS;
}
