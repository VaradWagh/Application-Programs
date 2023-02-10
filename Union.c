#include<stdio.h>

union Hello
{
	int i;		// 4
	float f;	//4
	double d;	// 8
};				// 8

int main()
{
	struct Demo dobj;
	union Hello hobj;
	
	

	return 0;
}
