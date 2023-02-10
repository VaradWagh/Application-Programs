// This file is example for constant concepts

#include<iostream>
using namespace std;

class Demo
{
	public:
		int i,j;
		
		// parameterised constructor with DEFAULT values
		Demo(int x = 10, int y = 20)
		{
			i = x;
			i = y;
		}
};

int main()
{

	return 0;
}
