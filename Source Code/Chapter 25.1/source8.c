#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *p = malloc(sizeof(char));
	if (p)
	{
		*p = 'A';
		printf("The value is: %c\n", *p);
	}
	free(p);
}