/*
 ============================================================================
 Name        : 01_VARIABLES.c
 Author      : Diego Suarez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
/*
 * Tipos de variables numericos:
 * int, float,double, long
 *
 * Tipos de varibles letras:
 * char
 *
 * AMBITO DONDE SE DECLARAN LAS VARIABLES:
 * VARIABLES GLOBALES: (SE DECLARAN FUERA DE CUALQUIER FUNCION)
 * 		Se almacenan en la memoria RAM.
 * 		Pueden ser usadas en cualquier parte del código
 *
 * VARIABLES LOCALES: (SE DECLARAN DENTRO DE UNA FUNCION)
 * 		Se almacenan en al Stack (pila), que es parte de la memoria Ram
 * 		Solo son accesibles dento de la función
 *
 *
* 	DECLARACION DE VARIABLES:
* 		<tipo de variable> <nombre de la variable> (opcional valor inicial)
 * */
#define PI 3.14 //constante simbolica, solo se ejecuta en tiempo de compilación

#define	CONST	(double)2.4E-3  //2.4x10^-3

#define FOSC	(long int)8E+6  //frecuencia de reloj 8000000

int edad; //las variables globales si no se inicializan tienen el valor 0 por defecto

int main(void) {
	const int MESES = 12; //se almacena en la memoria Flash (programa)
	int numAlumnos = 56; //las variables locales si no se inicializan pueden tomar cualquier valor

	/*Representacion de variables usando libreria stdint*/

	uint16_t numOctal = 013;		//Octal -> decimal = 11
	uint32_t numHex =0x13;			//hexadecimal -> decimal = 19
	uint8_t numBin = 0b1010;		//binario -> 10

	/******************************************************************/

	char caracter = 'a';
	printf("NUMERO OCTAL ->%d\n",numOctal);
	printf("NUMERO HEXADECIMAL ->0x%x\n",numHex);
	printf("NUMERO BINA ->%d\n",numBin);
	printf("CARACTER ->%c\n",caracter);
	printf("NUMERO CONST ->%f\n",CONST);
	printf("Frecuencia de Oscilacion: %d\n",FOSC);


	/*CADENA DE CARACTERES*/
	const char ejp[]="ESTO ES UNA CADENA\n";
	char nombre[20],apellido[20];

	printf("la cadena es: %s\n",ejp);
	printf("Ingrese su nombre-> ");
	scanf("%s",nombre);
	printf("Ingrese su apellido-> ");
		scanf("%s",apellido);
	printf("\n Su nombre completo es: %s %s\n",nombre,apellido);

	system("PAUSE");
	return EXIT_SUCCESS;
}
