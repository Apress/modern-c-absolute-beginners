#include <stdio.h>

typedef struct
{
	char c;
	int x;
	double d;
} MyStruct;

int main(void)
{
	MyStruct s;
	printf("Variable s of type MyStruct declared.\n");
}