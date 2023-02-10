
// Case 3
// Multiple inheritance (Not allowed)

class Demo
{
	int i;
	void fun()
	{
		
	}
}

class Hello extends Demo
{
	int i;
	void fun()
	{
		
	}
}

class Marvellous extends Demo, Hello	// NA (error)
{
	// Marvellous will get 2 fun function and 2 i varibales
	// this is called as abiguty
	// mhnun multiple inheritance NA
}

