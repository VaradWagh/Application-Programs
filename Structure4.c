#include<stdio.h>

struct Demo
{
	int no;  // 4 byte
	struct Demo *next;	// 8 byte
};

int main()
{
	struct Demo obj1;
	struct Demo obj2;
	struct Demo obj3;
	
	obj1.no = 11;
	obj2.no = 21;
	obj3.no = 51;
	
	obj1.next = &obj2 // next mhnje hath dusra mula cha khandywar 
	obj2.next = &obj3;// next mhnje hath tisra mula cha khandywar
	obj3.next = NULL; // tisra mula ne hath khali thevla
	 
	 
	 /* ob1.no = 11
	 	obj1.next = 200
	 	obj1.next->no = 21
	 	obj1.next->next->no = 51
	 */
	 
	return 0;
}
