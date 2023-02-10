// -w = to hide the warning 
// sizeof = operator
// Addressof = operator
#include<stdio.h>

int main()
{
	char ch = 'A';
	int i = 11;
	float f = 3.14;
	double d = 9.567;
	
	printf("Values from the variables are: \n");
	printf("%c\n",ch);
	printf("%f\n",f);   // or printf("%lf\n",ch);
	printf("%lf\n",d);
	
	
	printf("Size of each variable\n");
	printf("Size of character: %d\n",sizeof(ch));
	printf("Size of integer: %d\n",sizeof(i));
	printf("Size of each variable: %d\n",sizeof(f));
	printf("Size of each variable: %d\n",sizeof(d));
	
	
	printf("Address of each variables: \n");
	printf("Address of ch: %d \n",&ch);
	printf("Address of i: %d \n",&i);
	printf("Address of f: %d\n",&f);
	printf("Address of d: %d\n",&d);
	
	printf("Values in Hexa-Decimal: \n");
	printf("Address of each variables: \n");
	printf("Address of ch: %p \n",&ch);
	printf("Address of i: %p \n",&i);
	printf("Address of f: %p \n",&f);
	printf("Address of d: %p \n",&d);
	
	return 0;
}
