#include <stdio.h>

int main(void)
{
	int x = 123;
	int *ip = &x; // get an address of an integer object
	void *vp;
	vp = ip; // void pointer gets the value of an integer pointer
	printf("The pointed-to value is: %d\n", *((int *)vp));
}