#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 20;
	printf("The value of x and y before the change: %d, %d\n", x, y);
	int *p;	  /* declare a pointer to int called p */
	p = &x;	  /* p points at x */
	*p = 100; /* change the value of x by dereferencing a pointer */
	p = &y;	  /* p now points at y */
	*p = 200; /* change the value of y */
	printf("The value of x and y after the change: %d, %d\n", x, y);
}