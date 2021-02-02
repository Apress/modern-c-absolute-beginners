#include <stdio.h>

int main(void)
{
	const int maxSize = 3;

	int arr[maxSize];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;

	for (int i = 0; i < maxSize; i++)
	{
		printf("%d\n", arr[i]);
	}
}