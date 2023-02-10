#include<stdio.h>

const int no1 = 10;	// Non-bss memory allocate
const int no2;

int main()
{
	const int no3 = 10;
	const int no4;			// BSS memory allocate	
	
	return 0;
}
