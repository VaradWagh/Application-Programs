import java.util.*;

class Data		// shared between 2 threads
{
	public int Arr[];
	public Data(int size)	// constructor
	{
		Arr = new int[size];	// constructor is use to allocate resource
	}
	
	protected void finalize()	// destructor
	{
		Arr = null;
	}
	
	public void Accept()
	{	
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter numbers: ");
		for(int i = 0; i < Arr.length; i++)
		{
			Arr[i] = sobj.nextInt();
		}
	}
}

class DemoEven extends Thread
{
	public Data dobj;
	
	public DemoEven(Data obj)
	{
		dobj = obj;
	}
	public void run()
	{
		for(int i = 0; i < dobj.Arr.length; i++)
		{
			if(dobj.Arr[i] % 2 == 0)
			{
				System.out.println("Even number is : "+dobj.Arr[i]);
			}
		}
	}
}

class DemoOdd extends Thread
{
	public Data dobj;
	
	public DemoOdd(Data obj)
	{
		dobj = obj;
	}
	public void run()
	{
		for(int i = 0; i < dobj.Arr.length; i++)
		{
			if(dobj.Arr[i] % 2 != 0)
			{
				System.out.println("Odd number is : "+dobj.Arr[i]);
			}
		}
	}
}

class ThreadDemo12
{
	public static void main(String a[]) throws InterruptedException
	{
		Data obj1 = new Data(10);	// line 8 madhe janar
		obj1.Accept();	// itha 10 numbers ghetle
		
		DemoEven eobj = new DemoEven(obj1);	// common data		// line 30 cha parameterised constructor madhe gela
		DemoOdd oobj = new DemoOdd(obj1);	// common data
		
		Thread t1 = new Thread(eobj);
		Thread t2 = new Thread(oobj);
		
		t1.start();
		t2.start();
		
		t1.join();
		t2.join();
	}	
}

// line 76,77: thread(t1) cha dataeven object -> dataeven madhe (object madhe) -> array madhe -> mag titha apla numbers store zale
