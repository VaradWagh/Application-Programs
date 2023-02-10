#include<iostream>
using namespace std;

class Base
{
	public:			// Access specifier 
		int A,B;
		
		void fun()	// Function defination		1000
		{
			cout<<"Base fun\n";
		}
		void gun(int i)		// Function defination		2000
		{
			cout<<"Base gun with one integer\n";
		}
		void gun(int i, int j)	// Overloaded function Defination 	3000
		{
			cout<<"Base gun with 2 integers\n";
		}
};

class Derived : public Base
{
	public:
		int X,Y;
		void sun()		// Function Defination		4000
		{
			cout<<"Derived Sun\n";
		}
		// void fun()		// Function Re-defination		5000
		void fun(int i)
		{
			cout<<"Derived fun\n";
		}

};

int main()
{
	Derived dobj;
	// dobj.fun();			// CALL  	5000
	dobj.Base::fun();	// Explict call 
	dobj.gun(11);		// CALL		2000
	dobj.gun(11,21);	// CALL		3000
	dobj.sun();			// CALL		4000
	
	return 0;
}
