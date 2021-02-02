#include <stdio.h>

int main(void)
{
	printf("Using a for-loop:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", i);
	}
	
	printf("\nUsing a while-loop:\n");
	int counter = 0;
	while (counter < 10)
	{
		printf("%d ", counter);
		counter++;
	}
}