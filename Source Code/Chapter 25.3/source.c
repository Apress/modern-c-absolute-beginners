#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = malloc(sizeof(int));
	printf("Allocated %zu bytes.\n", sizeof *p);
	printf("Resizing allocated memory...\n");
	int *pnew = realloc(p, 10 * sizeof(int));
	printf("The memory block is now %zu bytes long.\n", 10 * sizeof(int));
}