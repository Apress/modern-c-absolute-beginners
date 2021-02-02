#include <stdio.h>

struct Person
{
	char *name;
	int age;
	double salary;
};

int main(void)
{
	struct Person o;
	
	o.name = "John Doe";
	o.age = 35;
	o.salary = 2500.00;
	
	printf("Name: %s\n", o.name);
	printf("Age: %d\n", o.age);
	printf("Salary: %.2f\n", o.salary);
}