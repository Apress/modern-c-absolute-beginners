#include "myheaderfile.h"
#include <stdio.h>

void myfunction(void)
{
	printf("Calling macro from a function inside a source2.c: %d\n", MYMACRO);
}