#include <stdio.h>

typedef struct MyStruct MyStruct;

struct MyStruct
{
	char c;
	int x;
	double d;
};

int main(void)
{
	MyStruct s;
	printf("Variable s of type MyStruct declared.\n");
}