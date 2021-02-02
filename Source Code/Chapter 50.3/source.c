#include <stdio.h>

int main(void)
{
	unsigned x = 255;
	printf("The value before the bitwise AND: %d\n", x);
	x = x & 0xffff; // 0xffff has the 1111 pattern
	printf("After the bitwise AND using the 1111 mask: %d\n", x);

	unsigned y = 255;
	printf("The value before the bitwise AND: %d\n", y);
	y = y & 0xaaaa; // 0xaaaa has the 1010 pattern
	printf("After the bitwise AND using the 1010 mask: %d\n", y);
}