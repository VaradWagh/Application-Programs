#include<iostream>
using namespace std;

class Base
{
	public:
		int A,B;		// 8 bytes
		void fun()
		{
			cout<<"Base fun\n";		// 1000
		}
		virtual void gun()
		{
			cout<<"Base gun\n";		// 2000
		}
		virtual void sun()
		{
			cout<<"Base sun\n";		// 3000
		}
		virtual void run()
		{
			cout<<"Base run\n";		// 4000
		}
};

class Derived : public Base
{
	public:
		int X,Y; 
		void gun()					
		{
			cout<<"Derived gun\n";	// 5000
		}
		virtual void run()
		{
			cout<<"Derived run\n";	// 6000
		}
		virtual void mun()
		{
			cout<<"Derived mun\n";	// 7000
		}
};

int main()
{
	// cout<<"Size of Base class : "<<sizeof(Base)<<"\n";		// after virtual 12
	// cout<<"Size of Derived class : "<<sizeof(Derived)<<"\n";	// after virtual 20
//	Base *bp = new Derived;  //upcasting dynamic
	Base *bp = NULL;
	bp = new Derived;		// C++ syntax
	// C programming:- bp = (Derived *)malloc(sizeof(Derived))	
//	bp = & dobj	;	// Upcasting
	
	bp->fun();	// Base fun
	bp->gun();	// Derived gun
	bp->sun();	// Base sun
	bp->run();	// Derived run
	// bp->mun();	// error because control base la janar ani base madhe mun nahi 
	
	delete bp; 
	
	return 0;
}
