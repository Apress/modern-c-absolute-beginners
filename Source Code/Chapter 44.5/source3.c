#include <stdio.h>
#include <stdlib.h>

void myfunction(int **arg)
{
	(*arg)++;
}

int main(void)
{
	int arr[] = {10, 20, 30};
	int *p = arr;
	printf("Pointer value before the function call: %p\n", (void *)p);
	printf("Pointed-to value before the function call: %d\n", *p);
	myfunction(&p); // pass in the pointer
	printf("Pointer value after the function call: %p\n", (void *)p);
	printf("Pointed-to value after the function call: %d\n", *p);
}