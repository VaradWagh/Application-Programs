#include<iostream>
using namespace std;

class Maths		// class and structure are same
{
	public:		// Access specifier
		int iNo1;	// Characteristics
		int iNo2;	// Characteristics
		
	Maths()		// Contructor (Default)
	{
		iNo1 = 0;
		iNo2 = 0;
	}

	
	Maths(int A, int B)		// Contructor (Parametrised)
	{
		iNo1 = A;
		iNo2 = B;
	}
	
	int Addition()		// Behaviour
	{
		return iNo1 + iNo2;	
	} 
	
	int Substraction()	// Behaviour
	{
		return iNo1 - iNo2;	
	} 
};

int main()
{
	Maths mobj1;     // Default PavBhaji
	Maths mobj2(10,11);  // Jain PavBhaji
	int ret = 0;
	
	ret = mobj2.Addition();
	cout<<"Addition is : "<<ret<<"\n";
	
	ret = mobj1.Addition();
	cout<<"Addition : "<<ret<<"\n";

	return 0;
}
