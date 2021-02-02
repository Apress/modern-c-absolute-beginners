#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	const char *s1 = "This will be duplicated.";
	char *s2 = strdup(s1);
	printf("The result is: %s\n", s2);
	free(s2);
}