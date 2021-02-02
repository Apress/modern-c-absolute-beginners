#include "myheaderfile.h"
#include <stdio.h>

// shared constants definitions
const int MY_MAX = 123;
const char *MY_MESSAGE = "This is a constant string.";
const double MY_PI = 3.14;

// shared variables definitions
int mysharedint = 123;
double myshareddouble = 456.789;

void myfunction(void)
{
	printf("\nAccessing shared constants from source2.c:\n");
	printf("%d, %s, %f\n", MY_MAX, MY_MESSAGE, MY_PI);

	printf("Accessing shared global variables from source2.c:\n");
	printf("%d %f\n", mysharedint, myshareddouble);
}