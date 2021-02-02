#include <stdio.h>

int main(void)
{
	int arr[5] = {10, 20, 30, 40, 50};
	printf("Trying to read out of bounds...\n");
	printf("The non-existent array element is: %d\n", arr[5]);
}