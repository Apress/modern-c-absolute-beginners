#include <stdio.h>

struct MyStruct
{
	char c;
	int x;
	double d;
} s = {'c', 123, 456.789};

int main(void)
{
	printf("Structure initialized.\n");
	printf("Member c has a value of %c\n", s.c);
	printf("Member x has a value of %d\n", s.x);
	printf("Member d has a value of %f\n", s.d);
}