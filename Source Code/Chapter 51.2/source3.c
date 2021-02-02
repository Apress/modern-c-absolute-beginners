#include <stdio.h>
#include <float.h>

int main(void)
{
	float f = 1.0f;
	printf("The value of f is: %e\n", f);
	printf("The next representable number is larger by: %e\n", FLT_EPSILON);
}