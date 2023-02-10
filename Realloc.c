// Program on Realloc

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p = NULL;
	
	p = (int *)malloc(10 * sizeof(int));	// 10x4 = 40  
	
	// use the memory
	
	q = (int *)realloc(p, 15 * sizeof(int));	// 15x4 = 60	Here, there are 2 parameters p, 15... p is from line 10
	if(q == NULL)
	{
		printf("Realloc fails");
		q = p;
	}
	// use of memory
	
	free(q);		// free (60)
	
	return 0;
}
