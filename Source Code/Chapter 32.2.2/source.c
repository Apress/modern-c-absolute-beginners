#include <stdio.h>
#include <string.h>

int main(void)
{
	char source[] = "Hello World.";
	char destination[5];
	memcpy(destination, source, sizeof destination);
	printf("The source is: %s\n", source);
	printf("The destination after copying 5 characters is:\n");
	// write a character, one by one using putchar() function
	for (size_t i = 0; i < sizeof destination; i++)
	{
		putchar(destination[i]);
	}
}