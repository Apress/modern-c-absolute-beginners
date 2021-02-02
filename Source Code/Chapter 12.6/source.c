#include <stdio.h>

int main(void)
{
	int arr[] = {10, 20, 30, 40, 50};
	int *p = arr;

	p += 2; // p now points at the third array element
	printf("The third array element is: %d\n", *p);
	p += 1; // p now points at the fourth array element
	printf("The fourth array element is: %d\n", *p);
}