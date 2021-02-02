#include <stdio.h>

union MyUnion
{
	char c;
	int x;
	double d;
};

int main(void)
{
	union MyUnion u;
	u.c = 'A';
	printf("The union's char member value: %c\n", u.c);
	u.x = 123;
	printf("The union's int member value: %d\n", u.x);
	u.d = 456.789;
	printf("The union's double member value: %f\n", u.d);
}