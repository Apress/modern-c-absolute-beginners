#include <stdio.h>

struct MyStruct
{
	char c;
	int x;
	double d;
};

int main(void)
{
	printf("Structure type struct MyStruct declared.\n");
	struct MyStruct s;
	printf("Variable s of type struct MyStruct declared.\n");
}