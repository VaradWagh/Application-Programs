#include<iostream>
using namespace std;

class Base
{
	public:
		int A, B;	// 2 characteristics = size = 8 bytes
		
		Base()	// constructor kahi det nahi
		{
			cout<<"Inside Base constructor\n";		
		}		
		~Base()
		{
			cout<<"Inside Base destructor\n";
		}
		void fun()
		{
			cout<<"Inside Base fun\n";
		}
};

class Derived : public Base	  // Inheritance (for java syntax- class derived extends base )
{
	public:
		int X,Y;
		
		Derived()
		{
			cout<<"Inside derived contructor\n";
		}
		~Derived()
		{
			cout<<"Inside derived destructor\n";
		}
		void gun()
		{
			cout<<"Inside gun of Derived\n";
		}

};

int main()
{
	Derived dobj;		// Static memory allocation 
	Derived * ptr = NULL; 
	
	ptr = new Derived;	// (Dynamic memory allocation) Derived class size 16 byte (Baapa chi + Pora chi milun)
	
	ptr->fun();		// Base
	ptr->gun();  // Derived
	
	delete ptr;
	
	return 0;
}
