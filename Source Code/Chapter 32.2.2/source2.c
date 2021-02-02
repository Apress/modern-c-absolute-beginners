#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int myArr[] = {10, 20, 30, 40, 50};
	// allocate space for 5 integers
	int *p = malloc(5 * sizeof(int));
	// copy bytes from an array to an allocated space
	memcpy(p, myArr, 5 * sizeof(int));
	printf("Copied bytes from an array to an allocated space. The values are:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", p[i]);
	}
	free(p);
}