#include<stdio.h>
 int X=10;    // Global variable (Data)
 
 
 void Demo()
 {
 	int B = 30;   // Local variable (stack)
 	
 	printf("Value B from main : %d\n",B);
 	printf("Value X from main : %d\n",X);
 	
 	// printf("%d",A);   // Not allowed because it is variable of A
 }
 int main()
 {
 	int A=20;    // Local variable (stack)
 	
 	printf("Value A from main : %d\n",A);
	printf("Value X from main : %d\n",X);
	
	// printf("%d",B);   // Not allowed because it is variable of B
	
	Demo();    // Function call
	
	return 0;
 }
