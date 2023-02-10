#include<stdio.h>
#include<stdbool.h>

// % Mod
// == Equality

bool CheckEven(int iNo)
{
	if(( iNo % 2 ) == 0)  // % gives remainder after performing divison
	{
		return true;
	}
	else
	{
		return false;
	}

}

int main()
{
	int iValue = 0;
	bool bRet = false; // false is initially zero and true is 1
	
	printf("Enter one number\n");
	scanf("%d",&iValue);
	
	bRet = CheckEven(iValue);  // true
	if(bRet == true)
	{
		printf("It is even number\n");
	}
	else
	{
		printf("It is odd number\n");
	}
	
	return 0;
}
