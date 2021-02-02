#include <stdio.h>

int main(void)
{
#ifndef MY_MACRO
#define MY_MACRO
	printf("Macro defined.\n");
#endif
}