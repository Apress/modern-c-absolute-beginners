#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Casting the result of malloc. Not needed!\n");
	int *p = (int *)malloc(sizeof(int));
	*p = 123;
	printf("The result is: %d\n", *p);
	free(p);
}