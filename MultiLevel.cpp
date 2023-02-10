#include<iostream>
using namespace std;

class Base
{
	public:
		int A, B;	// 2 characteristics = size = 8 bytes
		
		Base()	// constructor kahi det nahi		1st class
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
		
		Derived()		// 2nd class 
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

class DerivedX : public Derived		// 3rd class
{
		public:
			int i,j;
			DerivedX()
			{
				cout<<"Inside DerivedX constructor\n";
			}
			~DerivedX()
			{
				cout<<"Inside DerivedX destructor\n";
			}
			void sun()
			{
				cout<<"Inside DerivedX sun\n";
			}
};

int main()
{
	cout<<"Size of base :"<<sizeof(Base)<<"\n";
	cout<<"Size of Derived :"<<sizeof(Derived)<<"\n";
	cout<<"Size of DerivedX :"<<sizeof(DerivedX)<<"\n";
	
	DerivedX dobj;
	
	dobj.fun();
	dobj.gun();
	dobj.sun();
	
	return 0;
}

