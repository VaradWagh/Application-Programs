#include<iostream>
using namespace std;

class Base
{
	// int X;   // by-default  private
	
	public:
		int i;
	private:
		int j;
	protected:
		int k;
	public:		// it should be public for contructor
		Base()
		{
			i = 10;
			j = 20;
			k = 30;
		}
		void fun()
		{
			cout<<"Value of public i from fun :"<<i<<"\n";
			cout<<"Value of public j from fun :"<<j<<"\n";
			cout<<"Value of public k from fun :"<<k<<"\n";
		}
};

int main()
{
	Base bobj;
	cout<<"Value of public i :"<<bobj.i<<"\n";
	// cout<<"Value of public j :"<<bobj.j<<"\n";
	// cout<<"Value of public k :"<<bobj.k<<"\n";
	
	bobj.fun();
	
	return 0;
}
