#include<stdio.h>

void fun()   // Function Defination
{
	printf("Inside fun\n");
	
}

int main()
{
	fun();	// function call
	
	void (*fptr)();
	//fptr is a pointer which points
	// to the function that function accepts
	// nothing and that function returns nothing
	fptr = fun;
	
	fptr();
	
	return 0;
}
