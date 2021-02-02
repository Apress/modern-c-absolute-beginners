#include <stdio.h>

int main(void)
{
	int myvar = 123;
	int *p = &myvar;
	printf("The pointed-to value is: %d\n", *p);
}