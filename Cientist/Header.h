/************
 FICHEIRO HEADER
 ADD - SOMA
 MULTIPLY - SIMPLE
 SIN - MATH.S(SIN)
 COS - MATH.H(COS)
 TAN - MATH.H(ATAN)
 ~PRINTBACKARDS(PRINT ARRAY FROM LAST VALUE TO FIRST)
 »VERIFYOPTION(GETS THE STRING VALUE AND THEN COMPARE IF IS "EXIT" OR "DETAILS"
 IF EXIT THEN PROGRAM CLOSE USING EXIT METHOD FROM STDILIB.H(EXIT) METHOD
 IF DETAILS THEN GET THE SOURCE FILE OF THIS METHOD
 ------------
 ~ -> ARRAY METHODS
 » -> STRUCTS METHODS

 ENJOY
*************/
#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#define MAXCHAR 100
struct Option {
	char  OPTION[50];
};



void add(int a, int b)
{
	printf("Added value=%d\n", sin(a) + b);

}
void multiply(int a, int b)
{
	printf("Multiplied value=%d\n", a * b);
}
void Sin(double a){
	
	double op = sin(a);
	printf_s("sin of %.f is %.f\n",a,op);
}
void Cos(double a){

	double op = cos(a);
	printf_s("cos of %.f is %.f\n", a, op);
}
void Tan(double a){

	double op = atan(a);
	printf_s("Tan of %.f is %.f\n", a, op);
}
void printBackards(double *ptr,int counter,double array[]){

	/*for (int i = 0; i <= counter; i++,counter--)
	{
		*ptr = array[counter];
		printf_s("\n\n\t array[%d] :: %.f\n",i, *(ptr + i));
	}*/

	printf_s("\n\t**Reverse Array**\n");
	array[counter] = counter;
	while (counter--)
	{
		printf_s("\n\t array[%d]: %.f",counter,array[counter]);
	}
}

void VerifyOption(Option option){
	if (strcmp(option.OPTION, "EXIT") == 0)
	{
		printf("exit\n");
		exit(0);
	}
	else if (strcmp(option.OPTION, "Details") == 0){
		FILE *fp;
		char str[MAXCHAR];
		char* filename = "C:\\Users\\Utilizador\\Documents\\Visual Studio 2013\\Projects\\Cientist\\Cientist\\Header.h";

		fp = fopen(filename, "r");
		if (fp == NULL){
			printf("Could not open file %s", filename);
		}
		while (fgets(str, MAXCHAR, fp) != NULL)
			printf("%s", str);
		fclose(fp);


	}
}