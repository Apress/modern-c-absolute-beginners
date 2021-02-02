#include <stdio.h>

int main(void)
{
	int x = 123;
	const int *const p = &x; // constant pointer and constant pointed-to object
	printf("Defined a constant pointer and a constant pointed-to object.\n");
	printf("Pointer value is: %p\n", (void *)p);
	printf("Pointed-to object value is: %d\n", *p);
} 