#include <stdio.h>

// deprecated definition
[[deprecated]] 
void myoldfunction()
{
	printf("This is a deprecated function.\n");
}

int main(void)
{
	myoldfunction();
	printf("Using deprecated code.\n");
}