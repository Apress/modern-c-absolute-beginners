#include <stdio.h>

int main(void)
{
	char *p[] = {"This is the first sentence.",
				 "This is the second sentence.",
				 "This is the third sentence.",
				 "This is the last sentence."};
	for (int i = 0; i < 4; i++)
	{
		printf("%s\n", p[i]);
	}
}