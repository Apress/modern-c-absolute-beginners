#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Allocating memory without casting.\n");
	int *p = malloc(sizeof *p);
	*p = 123;
	printf("The result is: %d\n", *p);
	free(p);
}