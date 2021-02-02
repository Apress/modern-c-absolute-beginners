#include "myheaderfile.h"
#include <stdio.h>

// myfunction declaration
void myfunction(void);

int main(void)
{
	printf("Accessing shared constants from source.c:\n");
	printf("%d, %s, %f\n", MY_MAX, MY_MESSAGE, MY_PI);
	printf("Accessing shared global variables from source.c:\n");
	printf("%d %f\n", mysharedint, myshareddouble);

	myfunction(); // defined inside the source2.c file
}