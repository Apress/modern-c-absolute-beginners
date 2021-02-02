#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = calloc(1, sizeof(int));
	if (p)
	{
		printf("The initial value is: %d\n", *p);
	}
	free(p);
}