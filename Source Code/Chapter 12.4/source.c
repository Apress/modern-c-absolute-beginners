#include <stdio.h>

int main(void)
{
	int arr[] = {10, 20, 30, 40, 50};
	int *p = arr;

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", p[i]);
	}
}