#include <stdio.h>

int main(void)
{
	int x = 123;
	int *p = &x;
	printf("The pointer value is: %p\n", (void *)p); // OK
}