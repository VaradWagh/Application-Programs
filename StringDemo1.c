#include<stdio.h>
#include<string.h>

int main()
{
	
	char Arr[6] = "Hello";
	char * Ptr = Arr;
	int iCnt = 0;
	
	// string length logic without <string.h> header file
	while(*Ptr != '\0')
	{
		iCnt++;
		Ptr++;
	}
	
	printf("Length of string is : %d\n",iCnt);
			
	return 0 ;
}
