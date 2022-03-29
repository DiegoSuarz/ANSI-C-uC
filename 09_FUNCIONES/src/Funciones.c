/*
 * Funciones.c
 *
 *  Created on: 28 mar. 2022
 *      Author: Diego
 */

#include "Funciones.h"

int ingresoNumPasoPorValor(void){
	int n;
	do{
		printf("ingrese numero positivo(>0)(por valor): ");
		scanf("%d",&n);
	}while(n <= 0 );
	return n;
}

int suma(int n, int m){
	int res;

	if(n == 0)
		return m;
	if(m == 0)
		return n;

	res = n + m;
	return res;
}

void ingresoNumPasoPorReferencia(int *ptrNum){
	do{
		printf("ingrese numero positivo(>0)(por referencia): ");
		scanf("%d",ptrNum);
	}while(*ptrNum <= 0 );

}
