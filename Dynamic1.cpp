#include<iostream>
using namespace std;

int main()
{
	int *p = NULL;
	
	p = new int[5];	// in c++ & java
	// p = (int *)malloc(5 * sizeof(int));  in c
	
	// use the memory
	
	delete []p;		// in c++   There is no such line in java
	// if delete [] = deletes entire thing 
	// if delete = then it only deletes first address 
	// free(p);		// in c
	
	return 0;
}
