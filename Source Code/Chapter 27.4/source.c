#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x = 123;
	printf("The variable with an automatic storage duration: %d\n", x);

	int *p = malloc(sizeof(int));
	printf("The variable with an allocated storage duration: %p\n", (void *)p);
	free(p); // p is manually freed here
} // x is automatically freed here