#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include "Header.h"

/*****************************
-----Programa para Experiencia
*****************************/
#define MAX 9


double swap(double *ptr);

double balance[MAX];
int main(){


	Sin(1);
	Cos(0);
	Tan(360);

	int i = 4,
		j = 0;
	time_t t;
	double *ptr2 = 0;

	for (i = 0; i < MAX; i++) {
		srand((unsigned)time(&t));
		for (j = 0; j < i; j++) {
			balance[i] = rand() % 50;
			ptr2 = balance;
			//printf("\n\t\b array[%d] %f", i, *(ptr2 + i));	//modo de arvore
			printf("\n\t\v array[%d]: %.f", i, *(ptr2 + i));	//modo de normal
		}
	}
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

	getchar();
	return *ptr;
}
