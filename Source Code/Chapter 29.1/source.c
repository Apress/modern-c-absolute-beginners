#include <stdio.h>

int main(void)
{
	char str[100];
	FILE *fp = fopen("myfile.txt", "r"); // open a file
	while (fgets(str, 100, fp) != NULL) // read line of text
	{
		printf("%s", str); // print the line of text
	}
	fclose(fp); // close the file
}