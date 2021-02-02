#include <stdio.h>

#define MY_MACRO

int main(void)
{
#ifndef MY_MACRO
	printf("This portion of the code (A)\n");
	printf("will not get compiled.\n");
#endif

#ifndef NON_EXISTING_MACRO
	printf("This portion of the code (B)\n");
	printf("will get compiled.\n");
#endif
}