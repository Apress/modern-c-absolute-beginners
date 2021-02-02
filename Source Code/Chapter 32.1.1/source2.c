#include <stdio.h>
#include <string.h>

int main(void)
{
	const char *p = "How many characters here?";
	size_t myStrLength = strlen(p);
	printf("The string contains %zu characters.\n", myStrLength);
}