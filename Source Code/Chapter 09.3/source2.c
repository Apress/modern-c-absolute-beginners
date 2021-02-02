#include <stdio.h>

int main(void)
{
	int myarr[5] = {10, 20, 30, 40, 50}; /* initialize the array */
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", myarr[i]);
	}

	printf("\n");
	myarr[0] = 100; /* change the value of the first element */
	myarr[2] = 300; /* change the value of the third element */
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", myarr[i]);
	}
}