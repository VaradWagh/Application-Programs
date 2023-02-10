
// Case 6
// Allowed
// Why no ambiguty: 
interface Demo
{
	int i = 11;
	void fun()
	{
		
	}
}

interface Hello
{
	int i = 21;
	void fun()
	{
		
	}
}

class Marvellous implements Demo,Hello
{
	void fun()	// konachi ch fun nahi hi (doghanchi ahe) // body asel tar sangta ala asta konachi method ahe so yaa case madhe its of both
	{
		// ekdach yenar becaz its same in above classes	
	}	
}


