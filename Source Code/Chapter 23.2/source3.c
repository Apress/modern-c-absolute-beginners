#include <stdio.h>

#define ARRAY_ELEMENTS 3

int main(void)
{
	int arr[ARRAY_ELEMENTS];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;

	for (int i = 0; i < ARRAY_ELEMENTS; i++)
	{
		printf("%d\n", arr[i]);
	}
}