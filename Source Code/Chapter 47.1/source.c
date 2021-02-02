#include "myheaderfile.h"
#include <stdio.h>

void myfunction(); // declaration of a function defined inside a source2.c

int main(void)
{
	printf("Calling macro from a main: %d\n", MYMACRO);
	myfunction();
}