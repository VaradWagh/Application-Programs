#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;	// 4 byte   Instance variable
		int j;	// 4 byte
		static int k;  // class variable size of object is summation of its non-static characteristics
// size of above is 8 byte. 
		static int l;		// class variable

		Demo() 		// Default Constructor
		{
			i = 0;
			j = 0;
		}
		Demo(int a, int b)	// Parameterised Constructor
		{
			i = a;
			j = b;
		}

	// void fun(const Demo *this)
	void fun()		// Instance method
	{
	// static + non static
		cout<<"Inside non static\n";
		cout<<"Value of i:"<<this->i<<"\n";
		cout<<"Value of j:"<<this->j<<"\n";
		cout<<"Value of l:"<<l<<"\n";
		cout<<"Value of k:"<<k<<"\n";
	}
	
	// static void gun()
	static void gun()	// class method
	{
		cout<<"Value of k:"<<k<<"\n";
		cout<<"Value of l:"<<l<<"\n";
	}
};

int Demo::k = 0;	// accessing static
int Demo::l = 0;

// Load time variables
int main()
{
	cout<<"Inside main\n";
	cout<<"Value of k :"<<Demo::k<<"\n";  //0
	cout<<"Value of l :"<<Demo::l<<"\n";
	
	Demo::gun();	
	Demo obj1(10,11);
	Demo obj2(20,21);
	Demo obj3;
	//cout<<sizeof(obj); 8 byte
	
	cout<<"Value of i in obj1 :"<<obj1.i<<"\n"; // Instance variable 10
	cout<<"Value of i in obj2 :"<<obj2.i<<"\n"; // 20

	cout<<"Value of j in obj1 :"<<obj1.j<<"\n";  // 11
	cout<<"Value of j in obj2 :"<<obj2.j<<"\n";  // 21 
	
	obj1::fun();	// fun(&obj1); internally
	obj2::fun();
	
	obj1.gun();		// Demo::gun();
	return 0;
}
