#include <stdio.h>
#include <string.h>

int main(void)
{
	char myString[] = "Hello World!";
	char mySubstring[] = "World";

	if (strstr(myString, mySubstring))
	{
		printf("Substring found.\n");
	}
	else
	{
		printf("Substring not found.\n");
	}
}