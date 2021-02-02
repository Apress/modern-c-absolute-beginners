#include <stdio.h>
#include <string.h>

int main(void)
{
	char mystr[] = "Hello World!";
	char *pfound = memchr(mystr, 'W', strlen(mystr));
	if (pfound != NULL)
	{
		printf("Character/byte found at: %s\n", pfound);
	}
	else
	{
		printf("Character/byte not found: %s\n", pfound);
	}
}