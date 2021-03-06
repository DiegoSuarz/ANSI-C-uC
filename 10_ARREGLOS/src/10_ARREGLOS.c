/*
 ============================================================================
 Name        : 10_ARREGLOS.c
 Author      : Diego Suarez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//ejercicio tema 6 ejercicio 3

#include <stdio.h>
#include <stdlib.h>

//definicion de variables simbolicas
#define LENGTH(ARRAY)	(sizeof(ARRAY)/sizeof(*(ARRAY)))
#define LEN1	2
#define	LEN2	3
#define	LEN3	(LEN1 + LEN2)

/*<tipo> <nombre> <dimensiones>*/
int array1[LEN1];
int array2[LEN2];
int array3[LEN3];

//void InputArray(int *ptr);
void InputArray(int ptr[], int indice);
void ArrayCopy(int *dest, int *scr1,int *scr2,int len1, int len2);
void ShowArray(int *ptr, int len);


int main(void) {

	printf("INGRESE LOS ELEMENTOS DEL ARRAY	1: \n");
	InputArray(array1, LENGTH(array1));
	printf("INGRESE LOS ELEMENTOS DEL ARRAY	2: \n");
	InputArray(array2, LENGTH(array2));

	/**********************************************************/
	ArrayCopy(array3, array1, array2, LEN1,LEN2);
	printf("LOS ELEMENTOS SON: \n");
	ShowArray(array3,LEN3);
	printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}

void InputArray(int ptr[], int indice){
	for (int i=0;i<indice;i++){
		printf("elemento->[%d]: ",i);
		scanf("%d",&ptr[i]);
	}
}

void ArrayCopy(int *dest, int *scr1,int *scr2,int len1, int len2){
	for (int i=0;i<len1;i++)
		dest[i]=scr1[i]; //copia del priemr array

	for (int  i=len1;i<(len1+len2);i++)
		dest[i]=scr2[i-len1];
}

void ShowArray(int *ptr, int len){
	for (int i=0;i<len;i++){
		printf("Elemento [%i]: %d\n",i,*(ptr++));
	}
}
