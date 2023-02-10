// using friend concept

#include<iostream>
using namespace std;

class Demo
{
	private:
		int A,B;
	public:	
		Demo(int i = 0, int j = 0)
		{
			A = i;
			B = j;
		}	
		void Display()
		{
			cout<<A<<"\n";
			cout<<B<<"\n";		
		}	
		friend Demo operator +(Demo, Demo);	// not complusion to write prototype
};

// here + is polymorphism (compile time) 
// + is an operator overloaded function which accepts 2 parameters and both are object of Demo class
// this function returns the object of Demo class
Demo operator +(Demo obj1, Demo obj2) // operator overloading  // here + is function
{
	cout<<"Inside + Operator function\n";
	return Demo(obj1.A+obj2.A, obj1.B+obj2.B);
}

int main()
{
	Demo X(10,20);
	Demo Y(30,40);
	Demo Ans(0,0);
	
	Ans = X + Y;	// +(X,Y); + is function name   internally
	// cout<<Ans.A<<"\n";
	// cout<<Ans.B<<"\n";
	Ans = X + Y;
	X.Display();
	Y.Display();
	Ans.Display();
	
	return 0;
}
