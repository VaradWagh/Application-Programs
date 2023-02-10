#include<stdio.h>

int main()
{
	int iToken = 0;
	
	printf("Enter your token number");
	scanf("%d",&iToken);
  	
	switch(iToken)
	{
		case 11:
			printf("Mulachi chi chappal milali\n");
			break;
		case 21:
			printf("Mulichi chappal milali\n");
			break;
		case 51:
			printf("Aai chi chappal milali\n");
			break;
		case 101:
			printf("Wadlanchi chappal milali\n");
			break;
		default:
			printf("Sorry asa token nahiye...\n");
			break;	
			
	}
	
	return 0;
}
