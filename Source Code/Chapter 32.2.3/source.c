#include <stdio.h>
#include <string.h>

int main(void)
{
	int arr1[] = {10, 20, 30, 40, 50};
	int arr2[] = {10, 20, 20, 40, 50};

	int myResult = memcmp(arr1, arr2, 5 * sizeof(int));
	if (myResult == 0)
	{
		printf("The arrays values match.\n");
	}
	else
	{
		printf("The arrays values do not match.\n");
	}
}