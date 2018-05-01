#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include "Header.h"
#include <string.h>
/*****************************
-----Programa para Experiencia
*****************************/
#define MAX 9


double swap(double *ptr);
double balance[MAX];
struct Option option;

int main(int argc, const char * argv[]){

	Sin(1);
	Cos(0);
	Tan(360);

	int i = 0,j = 0;
	time_t t;
	double *ptr2 = 0;
	int qt;
	srand((unsigned)time(&t));

	printf_s("\n\t**Random Array**\n");
	for (i = 0; i < MAX; i++) {
	  balance[i] = rand() % 50;
	  ptr2 = balance;
	  //printf("\n\t\b array[%d] %f", i, *(ptr2 + i));	//modo de arvore
	  printf("\n\t\v array[%d]: %.f\n",i,*(ptr2+i));	//modo de normal
	  qt = balance[i];
	}
	printBackards(ptr2,MAX,balance);
	swap(ptr2);
	return 0;

}

 double swap(double *ptr){

	ptr = balance;
	double maximum = 0;

	for (int i = 0; i < MAX; i++){
		*ptr = balance[i];
		if (*ptr > maximum)
		{
			maximum = *ptr;
			//printf_s("maximum[%d] :%f", maximum);
			printf("\n\n\t Maior Numero: %.f", maximum,*ptr);
		}
		else if (*ptr < maximum){
			maximum = *ptr;
			printf("\n\n\t menor Numero: %.f", maximum, *ptr);
		
		}
	}

	printf_s("\n\tSair do programa ou Ver detalhes ?? EXIT || Details \n");
	gets_s(option.OPTION);


	strcpy_s(option.OPTION,option.OPTION);
	VerifyOption(option);

	getchar();
	return *ptr;
}

