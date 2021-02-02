#include <stdio.h>

int main(void)
{
	int x = 123;
	int *const p = &x; // constant pointer
	printf("Defined a constant pointer.\n");
	printf("Pointer value is: %p\n", (void *)p);
	printf("Pointed-to object value is: %d\n", *p);
}