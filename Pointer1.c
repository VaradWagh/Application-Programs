#include<stdio.h>

int main()
{
	int no = 11;
	
	int *p = &no;  // chitti gheun address(ghari) la jana
	
	printf("%d\n",no);	// 11
	printf("%d\n",p);	// 100
	printf("%d\n",&no);	// 100
	printf("%d\n",&p);	// 200
	printf("%d\n"sizeof(no));	// 4
	printf("%d\n"sizeof(p));	// 8
	
	
	/*printf("%d\n",no);
	printf("%d\n",sizeof(no));
	printf("%p\n",&no);  // Address display sathi %p vapra (%p for pointer address)	*/
	
	
	return 0;
}
