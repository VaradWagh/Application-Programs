#include "Marvellous.h"   // this is going to .h file that is Marvellous.h

int main() 
{
	// struct Demo obj;	 C
	Demo obj;	// C++
	int no = 11;
	float Radius = 30.6f;
	float Area = PI * Radius * Radius;
	
	// Pre-Processor removes this comment
	IPTR ptr = &no;		// ptr is name of IPTR
	
	printf("Area is : %f\n",Area);
	
	printf("Value of no is %d\n",*ptr);
	 
	return 0;
	
	
}

// Run this command:  g++ HeaderDemo.cpp --save-temps -o Myexe
