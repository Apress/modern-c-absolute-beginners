#include <stdio.h>

int main(void)
{
	int arr[3] = {1, 2, 3};
	size_t arrcount = sizeof(arr) / sizeof(arr[0]);
	printf("The number of array elements is: %ld\n", arrcount);
}