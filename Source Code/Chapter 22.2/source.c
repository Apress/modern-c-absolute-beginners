#include <stdio.h>

typedef struct
{
	char *name;
	int age;
	double salary;
} TPerson;

int main(void)
{
	TPerson o;
	
	o.name = "Sample Name";
	o.age = 35;
	o.salary = 2500.00;
	
	printf("Name: %s\n", o.name);
	printf("Age: %d\n", o.age);
	printf("Salary: %.2f\n", o.salary);
}