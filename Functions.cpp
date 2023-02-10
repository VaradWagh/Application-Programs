#include<stdio.h>

int Multiplication(int No1, int No2)  // Definition
{
	int Ans = 0;
	Ans = No1 * No2;
	return Ans;	
}


int main() 	// Call
{
	int A = 10, B = 11; 
	auto int Ret = 0;	// auto variable class
	// printf("Inside the main function \n");
	
	Ret = Multiplication(A,B);
	printf("Multiplication is: %d\n",Ret);
	
	return 0;
}
