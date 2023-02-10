#include<stdio.h>

enum days { Monday, Tuesday, Wednesday, Thursday,};



int main()
{
	int Salary[] = {200, 450, 250, 700};
	
	enum days obj;
	printf("Size of enum %d\n",sizeof(obj));
	printf("Monday : %d\n",Monday);
	printf("Tuesday : %d\n",Tuesday);
	printf("Wednesday : %d\n",Wednesday);
	printf("Friday : %d\n",Thursday);

	printf("My salary on Monday is %d\n",Salary[2]);
	printf("My salary on Monday is %d\n",Salary[Wednesday]);
	
	return 0;
}
