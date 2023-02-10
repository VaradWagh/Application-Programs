// super keyword
// super keyword calls parent class explicitly	
// in this code there is no default constructor in base class so we used super keyword
class Base
{
	public int A,B;
	public Base(int No1, int No2)
	{
		this.A = No1;
		this.B = No2;
	}
	public void fun()
	{
		System.out.println("Inside Base fun");
		System.out.println("Value of A from fun method is:"+this.A);
	}
	
}

class Derived extends Base
{
	public int X,Y;
	public Derived(int No1, int No2, int i, int j)
	{
		super(i,j);		// 1 usecase	Base(51,101)
		this.X = No1;
		this.Y = No2;
	}
	public void gun()
	{
		System.out.println("Value of A from gun method is:"+super.A);	// 2 usecase
		//System.out.println("Value of A from gun method is:"+A);
		super.fun();	// 3 usecase
	}
}	
	
class SuperDemo
{
	public static void main(String a[])
	{
		Derived dobj = new Derived(11,21,51,101);
		dobj.gun();
	}
}
