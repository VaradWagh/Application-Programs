#include<iostream>
using namespace std;

class Demo
{
	public: 
		int i;
		float f;
		double d;

	// void fun(Demo *this, int A)
		void fun(int A)
		{
			cout<<"Inside fun\n";
			cout<<"this->i<<\n";
		}
	
	// void gun(Demo *this, int A, int B)	
		void gun(int A, int B)
		{
			cout<<"Inside gun\n";
		}
};

int main()
{
	Demo obj1;	
	Demo obj2;
}			
