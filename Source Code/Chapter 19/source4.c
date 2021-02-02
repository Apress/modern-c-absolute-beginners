#include <stdio.h>

void myfunction(const int *myparam)
{
	printf("Using a constant function parameter.\n");
	printf("Pointer value is: %p\n", (void *)myparam);
	printf("Pointed-to object value is: %d\n", *myparam);
}

int main(void)
{
	int x = 123;
	int *p = &x;
	myfunction(p);
}