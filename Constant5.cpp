// This file is example for constant concepts

#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		const int j;		// constant characteristics
		// parameterised constructor with DEFAULT values
		Demo(int x = 10, int y = 20)
		{
			i = x;
		}
		void fun() 
		{
			int a = 10;
			const int b = 20;	// constant variable
			i++;	// Allowed (A)
			j++;	// NA (9)
			a++;	// A (18)
			b++;	// NA (19)
		}
		void gun() const   // constant behaviour
		{
			int a = 10;
			const int b = 20;
			i++;	// NA (23)
			j++;	// NA (23)
			a++;	// A (27)  becz it is local variable
			b++;	// NA (28)
		}
};

int main()
{
	Demo obj3(11, 21);     // 11	21
	const Demo obj2(11, 21);   // 11	21   // constant object
	
	obj1.fun();	// A
	obj1.gun();	// A
	obj1.fun(); // NA constant obj can call only constant function
	obj1.gun();	// A
	
	obj1.i++();	// A
	obj1.j++();	// NA
	obj2.i++();	// NA whole object is constant
	obj2.j++();	// NA whole object is constant
	
	return 0;
}
