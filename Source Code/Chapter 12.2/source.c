#include <stdio.h>

int main(void)
{
	int arr[] = {10, 20, 30, 40, 50};
	arr[0] = 11; // change the first element
	arr[4] = 55; // change the last element

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
}