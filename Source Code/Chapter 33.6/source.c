#include <stdio.h>

struct MyStruct
{
	int a;
	struct // anonymous structure
	{
		int b;
		int c;
	};
};

int main(void)
{
	struct MyStruct s;
	s.a = 123;
	s.b = 456;
	s.c = 789;
	printf("Field a: %d\n", s.a);
	printf("Inner field b: %d\n", s.b);
	printf("Inner field c: %d\n", s.c);
}