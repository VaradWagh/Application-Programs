#include<iostream>
using namespace std;

class Demo
{
	public:
		int i,j;
		Demo()
		{
			i = 0;
			j = 0;
		}
		Demo(int a, int b)
		{
			i = a;
			j = b;
		}
		Demo(Demo &ref)	// if & not written then new object will create (if & not written then it will give error and may leads to infinite recursive call)
		{
			i = ref.i;	// Copy constructor 
			j = ref.j;	// eg: Mitra chi book ghari anun H.W karun parat nit book parat tyala deychi
		}
};
int main()
{
	Demo obj1;
	Demo obj2(11,21);
	Demo obj3(obj2);	// here, we need to mention which obj we want(in this case: obj1, obj2)
	cout<<obj1.i<<"\t"<<obj1.j<<"\n";
	cout<<obj2.i<<"\t"<<obj2.j<<"\n";
	cout<<obj3.i<<"\t"<<obj3.j<<"\n";	// copy
	
	return 0;
}
