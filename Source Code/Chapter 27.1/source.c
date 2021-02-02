#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// allocate space for a double
	double *p1 = malloc(sizeof(double));
	if (p1)
	{
		*p1 = 123.456;
		printf("The value is: %f\n", *p1);
	}
	free(p1);

	// allocate space for an int
	int *p2 = malloc(sizeof *p2);
	if (p2)
	{
		*p2 = 789;
		printf("The value is: %d\n", *p2);
	}
	free(p2);
}