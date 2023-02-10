#include<stdio.h>

// Structure Declaration
// There is NO memory allocation at this point
struct Demo // Book flat(brochure)
		// demo is a structure which contains 4 elements (mix mithai box(int,double,float,int))
{
	int i;		// 4 rs
	float f;	// 4 rs
	int j;		// 4 rs
	double d;	// 8 rs
};      // declaration end  (global = binthi warcha clock )

int main()   	// Ready flat
{

// structure object / variable creation
// Memory gets allocated at this point

	struct Demo obj1;   // same flat(auto storage class) 
	struct Demo obj2;	// same flat(auto storage class)
	struct Demo obj3;	// same flat(auto storage class)
	
	// Memeber initialization
	obj1.d = 11.0;  	// sir cha ghar 
	obj2.i = 21;	// majha ghar
	obj3.j = 51;  // varcha pora ch ghar
	
	printf("Size of obj1 is : %d\n ",sizeof(obj1));   // 20 or 24
	printf("Size of obj2 is : %d\n", sizeof(obj2));	// 20 or 24
	printf("i of obj2 is : %d\n", obj2.i); 	// 21
	
	// Example: 1 modak sacha  = 21 modak i.e sacha is structure and 21 modak's are objects 
	return 0; 	
}



11
10.67
200
300
4
100
200
16 x
108 x
10.67 x

