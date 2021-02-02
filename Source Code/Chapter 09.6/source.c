#include <stdio.h>

int main(void)
{
	int arr[3] = {1, 2, 3};
	size_t arrsize = sizeof(arr);
	printf("Total array size in bytes: %ld\n", arrsize);
}