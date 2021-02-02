#include <stdio.h>

int main(void)
{
	int arr[] = {10, 20, 30, 40, 50};
	int *p = arr;
	printf("Printing array elements using a pointer:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", p[i]);
	}
}