#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = calloc(1, sizeof(int)); // or (1, sizeof *p)
	if (p)
	{
		printf("The initial value is: %d\n", *p);
		*p = 123;
		printf("The new value is: %d\n", *p);
	}
	free(p);
}