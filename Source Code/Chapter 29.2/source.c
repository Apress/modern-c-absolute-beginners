#include <stdio.h>

int main(void)
{
	FILE *fp = fopen("myfile.txt", "w"); // open a file for writing
	fprintf(fp, "%s", "my line of text"); // write a line of text
	fclose(fp); // close the file
}