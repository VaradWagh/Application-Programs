
class Demo
{
	int Size;
	int Arr[];
	
	public Demo(int No)
	{
		System.out.println("Inside Constructor");
		Size = No;
		Arr = new int[Size];
	}
	
	protected void finalize()
	{
		System.out.println("Inside finalize method");		// garbage ala ani collect kela
		Arr = null;
	}
}

class FinalizeDemo
{	
	public static void main(String s[])
	{	
		Demo obj = new Demo(4);
		obj = null;		// vaprun zala ki mala nako ata
		System.gc();	//system.(dot ani 'S' capital ahe mhun its static) gc= garbage collection  // call to the garbage collection	// phone karun kachra vala la call kara
	}
}
