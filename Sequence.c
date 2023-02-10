#include<stdio.h>

int Addition(int iNo1, int iNo2)   // Dukan chi Vati madhle 2 no's
{
	int iAns = 0;
	iAns = iNo1 + iNo2;
	return iAns;   // Aple 2 no's yat mix karun dile
}

int main()   // hall
{
	int iValue1= 0;    // 3 vatya pusun ghetlya
	int iValue2 = 0;	// 3 vatya pusun ghetlya
	int iRet = 0;	// (Apli vati ahe)rikami vati  (Addition chi value yat takaychi)
	
	printf("Enter first number\n");   // 1 vati madhe number takla
	scanf("%d",&iValue1);  // kay gheycha ani kashyat thevaycha(address vr thev)
	
	printf("Enter the second number\n");	// 2 vati madhe number takla
	scanf("%d",&iValue2);
	
	// ghar to dukan below...
	iRet = Addition(iValue1, iValue2);
	printf("Addition is : %d\n",iRet);
	
	return 0;
}
