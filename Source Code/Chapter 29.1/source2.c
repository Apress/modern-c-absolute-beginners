#include <stdio.h>

int main(void)
{
	char str[100];
	FILE *fp = fopen("myfile.txt", "r"); // open a file for reading
	if (!fp)
	{
		printf("Error opening the file. Exiting...\n");
		return 1; // exit the program with an error
	}
	while (fgets(str, 100, fp) != NULL) // read line of text
	{
		printf("%s", str); // print line of text
	}
	fclose(fp); // close the file
}