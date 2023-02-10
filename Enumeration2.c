// Enum value always 4
#include<stdio.h>

enum days { Monday = 2, Tuesday = 5, Wednesday, Thursday, Friday, Saturday, Sunday};
// enum days { Monday = 2, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};



int main()
{

	
	enum days obj;
	printf("Size of enum %d\n",sizeof(obj));
	printf("Monday : %d\n",Monday);
	printf("Tuesday : %d\n",Tuesday);
	printf("Wednesday : %d\n",Wednesday);
	printf("Friday : %d\n",Thursday);

	// Monday++;  error becz it is a Integral constant(can't change value)
	
// printf("%d\n",&Monday);  // error becz enum cha address nighat nahi
	return 0;
}
