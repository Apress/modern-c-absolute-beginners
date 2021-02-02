#include <stdio.h>

int main(void)
{
	int arr[5] = {10, 20, 30, 40, 50};
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

	int *p;
	p = &arr[0]; /* get the address of the first array element */
	*p = 11;	 /* change its value */
	p = &arr[4]; /* get the address of the last array element */
	*p = 55;	 /* change its value */

	printf("\nAfter the changes:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
}