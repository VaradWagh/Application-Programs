#include<iostream>
using namespace std;

class Base1		// 4 bytes
{
	public:
		int A;
		
		Base1()
		{
			cout<<"Base1 Constructor\n";
		}
		~Base1()
		{
			cout<<"Base1 Destructor\n";
		}
		void fun()		// behaviour
		{
			cout<<"Base1 fun\n";
		}
		
};

class Base2    // 12 bytes
{
	public:
		int I,J,K;
		
		Base2()
		{
			cout<<"Base2 Constructor\n";
		}
		~Base2()
		{
			cout<<"Base2 Destructor\n";
		}
		void gun()
		{
			cout<<"Base2 fun\n";
		}
};

// Not allowed in Java => Multiple inheritance is not their in java
// Base2 is written first so it will get printed first then Base2
class Derived : public Base1, public Base2		// 24 bytes
// class Derived : public Base2, Base1
{
	public:
		int X,Y;
		
		Derived()
		{
			cout<<"Derived Constructor\n";
		}
		~Derived()
		{
			cout<<"Derived Destructor\n";
		}
		void sun()
		{
			cout<<"Derived sun\n";
		}
};

int main()
{
	Derived dobj;	// static memory allocation
	
	dobj.fun();  // Base1	// static so . operator mostly otherwise 0->
	dobj.gun();  // Base2
	dobj.sun();	 // Derived
	
	return 0;
}
