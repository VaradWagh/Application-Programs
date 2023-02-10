#include<iostream>
using namespace std;

class Marvellous
{	
	public:
		void fun();		// Naked function
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
};

void Marvellous::fun()		// Member function		// 1 km nantar shop ala
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

	return 0;
}
