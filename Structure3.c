#include<stdio.h>

struct Student
{
	int Marks;
	int Age;
	char Division;
};

int main()
{
	struct Student obj;
	struct Student *ptr = NULL;  // * = de-reference operator
	
	// struct Student *ptr = &obj;
	ptr = &obj;
	
	// -> = Indirect Accessing Operator
	ptr->Marks = 90;
	ptr->Age = 21;
	ptr->Division = 'A';
	 
	return 0;
}
