#include<iostream>
using namespace std;

class Array
{
	public:
		int iSize;
		int *Arr;
		
		Array(int iLength = 10)
		{
			cout<<"Inside Constructor\n";
			iSize = iLength;// ilength(4,6)
			Arr = new int[iSize];  // Dynamic
		}
		~Array()
		{
			cout<<"Inside destructor\n";
			delete []Arr;	// [] = tells that erase all the memory(heap chi advi memory)
		}
		void Accept()		// member function of class array
		{
			cout<<"Enter the values\n";
			int i = 0;
			
			for(i = 0;i < iSize; i++)
			{
				cin>>Arr[i];
			}
		}
		void Display()		// member function of class array
		{
			cout<<"Elements of an array are: \n";
			int i = 0;
			for(i = 0; i < iSize; i++)
			{
				cout<<Arr[i]<<"\n";
			}
		}
		int Summation()		// member function of class array
		{
			int iSum = 0, i = 0;
			for(i = 0; i < iSize; i++)
			{
				iSum = iSum + Arr[i];
			}
			return iSum;
		}
};

int main()
{
	cout<<"Inside main\n";
	int iRet = 0;
	
	Array obj1(4);  // static object  ya line nantar control janar line 15 la destructor la
	
	obj1.Accept();
	obj1.Display();
	
	iRet = obj1.Summation();
	
	cout<<"Summation of all elements:"<<iRet<<"\n";
	
	return 0;
}
