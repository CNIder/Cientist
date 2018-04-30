// It is not recommended to put function definitions 
// in a header file. Ideally there should be only
// function declarations. Purpose of this code is
// to only demonstrate working of header files.
#include <stdio.h>
#include<math.h>
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
	printf_s("sin of %.f is %.f",a,op);
}
void Cos(double a){

	double op = cos(a);
	printf_s("cos of %.f is %.f", a, op);
}
void Tan(double a){

	double op = atan(a);
	printf_s("Tan of %.f is %.f", a, op);
}