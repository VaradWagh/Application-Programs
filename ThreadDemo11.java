// there is no multiple inheritance and also extends can extend only 1 class so for more class we use implents runnable
// Implements runnable method 

// extends jo class nasel to

class Demo extends Thread	
{
	public void run()
	{
		int i = 0;
		for(i = 1; i <= 10; i++)
		{
			try
			{
				System.out.println(Thread.currentThread().getName()+" : "+i);
				Thread.sleep(500);	// 1sec = 1000ms		// dukan dar mhntla 10min thamba mag mi car madhe zopun ghetla
			}
			catch(InterruptedException obj)
			{ }
		}
	}
}

class ThreadDemo11
{
	public static void main(String A[]) throws InterruptedException	// can also be written as try and catch
	{
		System.out.println("Inside main method");
		Demo obj1 = new Demo();
		Demo obj2 = new Demo();
		
		Thread t1 = new Thread(obj1);
		Thread t2 = new Thread(obj2);
		
// .start method is like line madhe thamb ani number ala ki jaa mag run method run kar
		t1.setName("First");	// sibling
		t2.setName("Second");	// sibling
		
		System.out.println("Priority of t1 is: "+t1.getPriority());		// Normal class aeroplane cha
		System.out.println("Priority of t2 is: "+t2.getPriority());		// Normal class aeroplane cha
			
		t1.setPriority(10);	// Business class aeroplane cha (just priority vadte) 
		t2.setPriority(2);		
		System.out.println("Priority of t1 is: "+t1.getPriority());
		System.out.println("Priority of t2 is: "+t2.getPriority());
		
		t1.start();			// hi method thread madhe ahe
		t2.start();			// hi method thread madhe ahe
	
		t1.join();		// mall madhe maja mi gheun direct door pashi waiting la thamblo gharchyan sathi  // t1 ya line chya khali yeun ch det nahi
		t2.join();		 // mall madhe maja mi gheun direct door pashi waiting la thamblo dusra member sathi(gharchyan sathi) //   t2 ya line chya khali yeun ch det nahi
	
		System.out.println("End of main thread");
	}
}

