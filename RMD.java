
class Base
{
	public void fun()
	{
		System.out.println("Base fun");
	}
	public void gun()
	{
		System.out.println("Base gun");
	}
	public void sun()
	{
		System.out.println("Base sun");
	}
}

class Derived extends Base
{
	public void fun()
	{
		System.out.println("Derived fun");
	}
	public void gun()
	{
		System.out.println("Derived gun");
	}
	public void run()
	{
		System.out.println("Derived run");
	}
	
}

class RMD
{
	public static void main(String arg[])
	{
		Base bobj = new Derived();		// upcasting
		
		bobj.fun();		//	Derived fun
		bobj.gun();		//	Derived gun 
		bobj.sun();		//	Base sun
	//	bobj.run();		// Error  becz its bobj i.e base and derived extends base
	}
}

/*
Base bobj = new Base();		// no casting
Derived bobj = new Derived();	// no casting
Base bobj = new Derived();		// up casting
Derived bobj = new Base();		// down casting
*/
