#include<iostream>
using namespace std;

class Demo
{
	public:
	// size int + int = 8 byte
		int x;	// characteristics
		int y;	// characteristics
		
		Demo()
		{
			cout<<"Inside Constructor"<<"\n";
		}
		~Demo()
		{
			cout<<"Inside destructor"<<"\n";
		}
		void Fun()
		{
			cout<<"Inside fun"<<"\n";
		}
};

int main()
{

	Demo * ptr = NULL;
	
	ptr = (Demo *)malloc(sizeof(Demo));
	// ptr = new Demo
	
	ptr->Fun();
	
	free(ptr);
	// delete ptr;
	
	return 0;
}
