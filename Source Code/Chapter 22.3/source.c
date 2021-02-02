#include <stdio.h>

typedef struct
{
	char name[50];
	int age;
	double salary;
} TPerson;

int main(void)
{
	TPerson o = {"John Doe", 25, 2500.00};

	printf("Name: %s\n", o.name);
	printf("Age: %d\n", o.age);
	printf("Salary: %.2f\n", o.salary);
}