#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Allocating memory...\n");
	int *p = malloc(sizeof(int)); // allocate the memory
	if (p)
	{
		*p = 123456; // manipulate memory
		printf("The value is: %d\n", *p);
	}
	printf("Deallocating memory...\n");
	free(p); // deallocate the memory
	printf("Done.\n");
}