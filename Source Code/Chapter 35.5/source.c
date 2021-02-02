#include <stdio.h>
#include <string.h>

int main(void)
{
	const char source[] = "Copy this until ~ is found.";
	char destination[sizeof source];
	const char stopchar = '~';
	void *p = memccpy(destination, source, stopchar, sizeof destination);
	if (p)
	{
		printf("Terminating character found. The result is:\n");
		printf("%s\n", destination);
	}
	else
	{
		printf("Terminating character not found. The result is:\n");
		printf("%s\n", destination);
	}
}