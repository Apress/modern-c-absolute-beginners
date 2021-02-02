#include <stdio.h>
#include <string.h>

int main(void)
{
	const char str[] = "How many characters here?";
	size_t myStrLength = strlen(str);
	printf("The string contains %zu characters.\n", myStrLength);
}