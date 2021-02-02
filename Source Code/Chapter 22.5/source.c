#include <stdio.h>

typedef union
{
	char *arr;
	int x;
	double d;
} TMyUnion;

int main(void)
{
	TMyUnion u;
	u.arr = "Hello World from a union!";
	printf("Union's array field: %s\n", u.arr);
	u.x = 123;
	printf("Union's integer field: %d\n", u.x);
	u.d = 456.789;
	printf("Union's double field: %f\n", u.d);
}