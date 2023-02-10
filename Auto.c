#include<stdio.h>

int main()
{
	int A;       // bad
	int B = 0;		// good
	int C = 10;
	auto int D;
	auto int E = 0;  // good		(take normal biryani)
	
	register int No = 11;    // request micro-processor  (chicken biryani, if not)
	
	return 0;
}
