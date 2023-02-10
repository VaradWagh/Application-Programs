#include<stdio.h>


// typedef JUNA_NAW		NAWIN_NAW

typedef int INTEGER;

//			juna naw		nawin naw
typedef unsigned long int ULONG;

struct Demo
{
	int a;
	int b;
};
//		old name     new name   (new name should be single word/name  old can be any) 
typedef struct Demo DEMO;
//		old name(till *)	new name	
typedef struct Demo * PDEMO;

int main()
{
	INTEGER i = 10;		// int i = 10;
	ULONG j = 21;		// unsigned long int j = 21;
	DEMO obj;			// struct Demo obj;
	PDEMO ptr = &obj;	// struct Demo * ptr = &obj;
	
	return 0;
}
