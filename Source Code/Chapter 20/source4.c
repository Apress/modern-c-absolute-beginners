#include <stdio.h>

enum Lights
{
	RED,
	YELLOW,
	GREEN
};

int main(void)
{
	enum Lights myLights;
	myLights = GREEN;
	int x = myLights;
	printf("Converting an enum to integer. The value is: %d\n", x);
}