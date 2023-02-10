#include<stdio.h>

#pragma pack(1)  // Kat-kachar karna

struct Demo
{
	//int i;		// 4
	char ch;	// 1
	//float f;
	float f1;	// 4
	char ch1;	// 8
};

int main()
{
	struct Demo dobj;
	
	printf("Size of structure is : %d\n",sizeof(dobj));
	

	return 0;
}
