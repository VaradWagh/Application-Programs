// abstract class is a class which contains 0 or more abstract methods in it.
// if we dont want to access the object then write abstract, means we dont want to create object then write abstract
// Abstract class achives 0 to 100% abstraction

abstract class Arithematic
{
	public int Addition(int No1, int No2)
	{
		return No1 + No2;
	}
	public abstract int Substraction(int No1, int No2);
	// c++ = virtual int Substraction(int No1, int No2) = 0;
}

class Marvellous extends Arithematic
{
	public int Substraction(int No1, int No2)
	{
		return No1 - No2;
	}
}

class AbstractDemo
{
	public static void main(String Arr[])
	{
		// Arithematic aobj = new Arithematic();
		Arithematic aobj = new Marvellous();	// this line is reference:- refer class chi book of abstract topic point number 2(7,8)
		Marvellous mobj = new Marvellous();	// error becz not allowed to create object becz it is abstract
		
		int Ret = 0;
		Ret = mobj.Addition(11,10);
		System.out.println("Additon is :"+Ret);
		
		Ret = mobj.Substraction(11,10);
		System.out.println("Substraction is :"+Ret);
	}
}
