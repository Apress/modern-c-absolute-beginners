#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = malloc(5 * sizeof(int));
	if (p)
	{
		printf("Allocated %zu bytes.\n", 5 * sizeof(int));
	}
	int *pnew = realloc(p, 10 * sizeof(int));
	if (pnew)
	{
		printf("Resizing allocated memory...\n");
		printf("The memory block is now %zu bytes long.\n", 10 * sizeof(int));
		// resizing successful, free the realloc pointer
		free(pnew);
	}
	else
	{
		// resizing fails, free the original pointer
		free(p);
	}
}