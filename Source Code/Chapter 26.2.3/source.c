#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Allocating an object...\n");
	int *p = malloc(sizeof(int));
	*p = 123;
	printf("Object with allocated storage has a value of: %d\n", *p);
	printf("Deallocating an object...\n");
	free(p);
	printf("Done.\n");
}