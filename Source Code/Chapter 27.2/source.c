#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// allocate space for 5 doubles
	double *p = malloc(5 * sizeof(double));
	if (p)
	{
		printf("The values are:\n");
		for (int i = 0; i < 5; i++)
		{
			p[i] = i;
			printf("%.2f ", p[i]);
		}
	}
	free(p);
}