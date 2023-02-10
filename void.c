#include<stdio.h>

int main()
{
	char ch = 'A';
	int i = 11;
	float f = 9.09;
	double d = 89.9078;
	
	char *cp = &ch; // cp = character pointer
	int *ip = &i;  // cp = Integer pointer
	float *fp = &f;
	double *dp = &d;
	
	void *vp = &ch;   // *vp = Terrace ani window wala example
	
	printf("Value of ch: %c\n",ch);
	printf("Address of ch: %p\n",&ch);
	printf("Value inside cp: %p\n",cp);
	printf("Data refer by cp: %c\n",*cp);
	printf("Size of ch: %d\n",sizeof(ch));
	printf("Size of cp: %d\n",sizeof(cp));
	
	printf("Data refer by vp: %c\n",*(char *)vp);	// (char *) = Type-casting
	vp = &i;
	printf("Data refer by vp: %d\n",*(int*)vp);
	
	return 0;
}
