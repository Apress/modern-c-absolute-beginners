#include <stdio.h>

#define myfn(X) _Generic((X), \
						int : myfn_i, \
						float : myfn_f, \
						double : myfn_d, \
						default : myfn_ld \
						)(X)

void myfn_i(int x)
{
	printf("Printing int: %d\n", x);
}

void myfn_f(float x)
{
	printf("Printing float: %f\n", x);
}

void myfn_d(double x)
{
	printf("Printing double: %f\n", x);
}

void myfn_ld(long double x)
{
	printf("Printing long double: %Lf\n", x);
}

int main(void)
{
	int x = 123;
	float f = 456.789f;
	double d = 101.112;
	long double ld = 134.456l;

	myfn(x);
	myfn(f);
	myfn(d);
	myfn(ld);
}