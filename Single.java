// inheritance
import java.lang.*;	// it also works internally(if not written)
/*
class Object
{
	// code
}
*/
class Base	// class Base extends Object
{
// 8 bytes
	public int A,B;
	public Base()		// default constructor
	{
		System.out.println("Base Constructor");
		this.A = 10;
		this.B = 20;
	}
	public void fun()	// Definition   // fun with no parameter
	{
		System.out.println("Inside Base fun");
	}
	public void gun()	 // Definition
	{
		System.out.println("Inside Base gun");
	}
	public void fun(int No)	  // Overloaded Definition	// function overloading
	{
		System.out.println("Inside Base fun with one integer");
	}
}

class Derived extends Base		//	inheritence  // class Derived : public Base
{
// 16 bytes
	public int X,Y;
	public Derived()
	{
		System.out.println("Derived Constructor");
		this.X = 30;
		this.Y = 40;
	}
	public void sun()	// Definition
	{
		System.out.println("Inside Derived sun");
	}
	public void gun()	// Overrided Definition		// re-Definition in C++
	{
		System.out.println("Inside Derived gun");
	}
}

class Single
{
		public static void main(String arg[])
		{
		//	Base bobj1 = new Base();		// No casting
		//	Derived dobj1 = new Derived();	// No casting
			Base bobj2 = new Base();		// Upcasting
			// error  Derived dobj2 = new Base();		// Downcasting
		
			bobj2.fun();	//	Base fun
			bobj2.fun(11);	//	Base fun
			bobj2.gun();	//	Derived gun
			// bobj2.sun();	//	Derived sun
		}
}
