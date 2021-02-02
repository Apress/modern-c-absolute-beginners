#include <stdio.h>

int main(void)
{
	// const variable
	const int x = 123;

	// const pointer, can not use: p = "Something else";
	char *const p = "Hello World";

	int y = 456;
	// const pointee, can not use: *p2 = 789;
	const int *p2 = &y;

	printf("Constant variable: %d\n", x);
	printf("Constant pointer: %p\n", (void *)p);
	printf("Constant pointee: %d\n", *p2);
}