/*
 ============================================================================
 Name        : 11_STRING.c
 Author      : Diego Suarez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH(ARRAY)	(sizeof(ARRAY)/sizeof(*(ARRAY)))

char str[]= "ESTO ES UNA CADENA";
char strNum[]= "1234";

int num;

int main(void) {

	printf("tama%co-> %d\n",164,LENGTH(str));
	printf("numero de elementos-> %d\n",strlen(str));

	strcpy(strNum,"123");   //copiar una cadena de caracteres
	strNum[3]='\0';			//agregando el caracter null a la cadena de caracteres
	num =atoi(strNum);		//funcion para convertir una cadena a numeros real
	printf("numero convertido-> %d\n",num);


	system("pause");
	return EXIT_SUCCESS;
}
