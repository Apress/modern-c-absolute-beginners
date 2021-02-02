#include <stdio.h>
#include <string.h>

int main(void)
{
	char myString[] = "Hello World!";
	char mySubstring[] = "World";
	char *posFound = strstr(myString, mySubstring);
	if (posFound)
	{
		printf("Substring found at position: %ld.\n", posFound - myString);
	}
	else
	{
		printf("Substring not found.\n");
	}
}