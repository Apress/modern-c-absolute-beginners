#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = malloc(5 * sizeof(int));
	if (p)
	{
		p[0] = 10;
		p[1] = 20;
		p[2] = 30;
		p[3] = 40;
		p[4] = 50;
		printf("Allocated an array of 5 integers.\n");
		// print out the array
		for (int i = 0; i < 5; i++)
		{
			printf("%d ", p[i]);
		}
	}
	free(p);
}