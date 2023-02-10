// Constant Behaviour(Constant function)

#include<iostream>
using namespace std;

class Demo
{
	public:
		int i,j;
		// parameterised constructor with DEFAULT values
		Demo(int x = 10, int y = 20)
		{
			i = 10;
			j = 20;
		}
		void fun()  // changes possible
		{
			i++;
			j++;
		}
		void gun() const   // changes not possible(jasa ahe tasa)
		{
			i++;
			j++;
		}
};

int main()
{
	Demo obj1;  // 10  20
	Demo obj2(11);  // 11  20
	Demo obj3(11, 21);  // 11  21
	obj3.fun();
	obj3.gun();
	// obj3.i++;  throws an error
	
	return 0;
}
