#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = malloc(sizeof(int));
	if (p)
	{
		printf("Allocated %zu bytes.\n", sizeof *p);
	}
	int *pnew = realloc(p, 10 * sizeof(int));
	if (pnew)
	{
		printf("Resizing allocated memory...\n");
		printf("The memory block is now %zu bytes long.\n", 10 * sizeof(int));
		// reallocation successful, free the new pointer
		free(pnew);
	}
	else
	{
		// if reallocation fails, free the original pointer
		free(p);
	}
}