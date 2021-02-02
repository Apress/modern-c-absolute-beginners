#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Allocating memory...\n");
	int *p = malloc(sizeof(int));
	*p = 123;
	printf("The value is: %d\n", *p);
	printf("Freeing twice - undefined behavior.\n");
	free(p);
	free(p); // undefined behavior
}