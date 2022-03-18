/*
 ============================================================================
 Name        : 08_BUCLE_FOR.c
 Author      : Diego Suarez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 Ejercicio 9 tema4 parte 2

 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {

	int numero;
	int mayor = 0;
	int menor = 0;
	float media;
	int suma = 0;

	for(int i=0; i<10;i++){
		do{
			printf("ingrese numero %d (0>):",i+1);
			scanf("%d",&numero);
		}while(numero<=0); //validación

		if(i==0){
			mayor = numero;
			menor = numero;
		}

		suma += numero;

		if(numero>mayor) mayor = numero;
		if(numero<menor) menor = numero;
	}

	media = (float)suma /10.0;
	printf("suma->%d\n",suma);
	printf("media->%.2f\n",media);
	printf("numero mayor->%d\n",mayor);
	printf("numero menor->%d\n",menor);

	system("pause");
	return EXIT_SUCCESS;
}
