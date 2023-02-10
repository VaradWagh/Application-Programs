#include<stdio.h>

int No = 11; // Initialised global variable
int No2;  // Non Initialised global variable

static int A = 10;  // Initialised static global ariable

static int B;  // Non Initialised static global ariable

void Demo() // Function Defination
{
	int X = 10;
	static int Y = 20;
	printf("Inside Demo\n");
}
