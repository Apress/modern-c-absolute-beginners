#include <stdio.h>

int main(void)
{
	char c = 'A';
	int x = 123;
	double d = 456.789;
	size_t size = sizeof(long);
	int *p = &x;
	long l = 12345678910L;
	char str[] = "Hello World!";

	printf("Type char: %c\n", c);
	printf("Type int: %d\n", x);
	printf("Type double: %f\n", d);
	printf("Type size_t: %zu\n", size);
	printf("Pointer type: %p\n", (void *)p);
	printf("Type long: %ld\n", l);
	printf("Character array: %s\n", str);
}