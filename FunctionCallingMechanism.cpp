#include<iostream>
using namespace std;
// Call by value
void fun(int no)
{
	cout<<"Inside Call by value"<<no<<"\n";
	no++;
}
// Call by address 
void gun(int *p)
{
	cout<<"Inside Call by address"<<*p<<"\n";
	(*p)++;
}
// Call by reference
void sun(int &ref)
{
	cout<<"Inside Call by reference"<<ref<<"\n";
	ref++;
}

int main()
{
	int i = 10;		// fun(10)
	int j = 10;		// address: gun(200) assumed 
	int k = 10;		// sun(k)
	
	fun(i);
	cout<<i<<"\n";
	gun(&j);
	cout<<j<<"\n";	
	sun(k);
	cout<<k<<"\n";
	
	return 0;
}
