#include<iostream>
using namespace std;

class Marvellous		// size = empty = 1
{	
	public:
		void fun();		// Naked function
		void gun();
};

class Demo		// Gharche
{
	public:
		int i;
	private:
		int j;
	protected:
		int k;	
	public:
		Demo()
		{
			i = 10;
			j = 20;
			k = 30;
		}
		friend void Marvellous::fun();		// Mitra mhunun gharche ghari ghenar
		friend void Marvellous::gun();
};

void Marvellous::fun()		// Member function
	{
		Demo obj;
		cout<<"Value of i : "<<obj.i<<"\n";
		cout<<"Value of j : "<<obj.j<<"\n";
		cout<<"Value of k : "<<obj.k<<"\n";
	}
void Marvellous::gun()		// Member function		
	{
		Demo obj;
		cout<<"Value of i : "<<obj.i<<"\n";
		cout<<"Value of j : "<<obj.j<<"\n";
		cout<<"Value of k : "<<obj.k<<"\n";
	}


int main()
{
	Marvellous mobj;
		
	mobj.fun();
	mobj.gun();
	return 0;
}
