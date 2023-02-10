import java.lang.*;		// Default package in java

class Demo
{
	public void fun()	// fun@0
	{
		System.out.println("Function without parameter");
	}
	public void fun(int i)	// fun@li
	{
		System.out.println("Function with one integer parameter");
	}
	public void fun(int i, int j)	// fun2i
	{
		System.out.println("Function with 2 integer parameter");
	}
	public void fun(double i)	// fun@1d
	{
		System.out.println("Function with one double parameter");
	}
}

class Overloading
{
	public static void main(String a[])
	{
		Demo obj = new Demo();
		obj.fun();
		obj.fun(11);
		obj.fun(11,10);
		obj.fun(11.21);
	}
}
