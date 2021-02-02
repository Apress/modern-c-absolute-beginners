#include <stdio.h>

int main(void)
{
	int arr[5] = {10, 20, 30, 40, 50};
	int *p = arr; /* p now points at the first array element */
	printf("The first array element is: %d\n", *p);
}