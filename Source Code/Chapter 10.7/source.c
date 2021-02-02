#include <stdio.h>

int main(void)
{
	char *p[] = {"First sentence.",
				 "Second sentence.",
				 "Third sentence."};
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", p[i]);
	}
}