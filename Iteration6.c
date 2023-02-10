#include<stdio.h>

int main()
{
	int iCnt = 0;
	
	iCnt  = 1;		// 1
	do	// 2   Head
	{
		printf("Jay Ganesh..\n");  // 4
		iCnt++;		// 3
	}while(iCnt < 6);    // Tail (Sheput)

	return 0;
}
