#include <stdio.h>

int main(void)
{
	printf("Enter an int and a double and press <enter>: \n");
	char buffer[50];
	int x;
	double d;
	// read the input and store it into a buffer string
	if (fgets(buffer, 50, stdin) != NULL)
	{
		// read from a buffer string into our variables
		sscanf(buffer, "%d %lf", &x, &d);
		printf("You entered: %d and %lf\n", x, d);
	}
	else
	{
		printf("Failure. No characters are read.\n");
	}
}