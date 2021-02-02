#include <stdio.h>

struct S1
{
	char c;
	char d;
};

struct S2
{
	char c;
	int x;
};
int main(void)
{
	printf("The alignment of char: %zu\n", _Alignof(char));
	printf("The alignment of int: %zu\n", _Alignof(int));
	printf("The alignment of struct S1: %zu\n", _Alignof(struct S1));
	printf("The alignment of struct S2: %zu\n", _Alignof(struct S2));
}