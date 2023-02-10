// there is no multiple inheritance and also extends can extend only 1 class so for more class we use implents runnable
// Implements runnable method 

// extends jo class nasel to

class Demo extends Thread	
{
	public void run()
	{
		int i = 0;
		for(i = 1; i <= 100; i++)
		{
			System.out.println(Thread.currentThread().getName()+" : "+i);
		}
	}
}

class ThreadDemo4
{
	public static void main(String A[])
	{
		System.out.println("Inside main method");
		Demo obj1 = new Demo();
		Demo obj2 = new Demo();
		
		Thread t1 = new Thread(obj1);
		Thread t2 = new Thread(obj2);
		
// .start method is like line madhe thamb ani number ala ki jaa mag run method run kar
		t1.setName("First");
		t2.setName("Second");
		
		t1.start();		// hi method thread madhe ahe
		t2.start();		// hi method thread madhe ahe
	}
}
