#include <stdio.h>

int main(void)
{
	int x = 123;
	int *p = &x;
	printf("The value of a pointed-to object is: %d\n", *p);
}