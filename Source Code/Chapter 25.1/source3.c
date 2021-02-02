#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = malloc(sizeof(int));
	if (p == NULL)
	{		
		printf("Error allocating the memory. Exiting.");
		return -1;
	}
	*p = 123;
}