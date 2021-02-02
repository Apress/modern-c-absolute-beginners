#include <stdio.h>

struct MyStruct
{
	char c;
	int x;
	double d;
};

struct MyStruct createStruct(char cparam, int xparam, double dparam)
{
	struct MyStruct temps;
	temps.c = cparam;
	temps.x = xparam;
	temps.d = dparam;
	return temps;
}

int main(void)
{
	struct MyStruct s;
	s = createStruct('c', 123, 456.789);
	printf("Member c has a value of %c\n", s.c);
	printf("Member x has a value of %d\n", s.x);
	printf("Member d has a value of %f\n", s.d);
}