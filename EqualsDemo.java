class Demo
{
	public int No1;
	public int No2;
	
	public Demo(int a, int b)
	{
		No1 = a;
		No2 = b;
	}
}
class EqualsDemo
{
	public static void main(String A[])
	{
	
		String s1 = "Hello";
		String s2 = "Hello";
		
		// Demo obj1 = new Demo(11,21);
		// Demo obj2 = new Demo(11,21);
		
		System.out.println("Hashcode of s1 : "+s1.hashCode());	// 1001
		System.out.println("Hashcode of s2 : "+s2.hashCode());	// 1001
		
		if(s1.equals(s2))	// if("Hello" == "Hello")  // deep // H , e, l, l, o, \0
		{
			System.out.println("Objects are same");	
		}	
		else
		{
			System.out.println("Objects are different");
		}
		
		if(s1 == s2)	// if(1001 == 1001)	// shallow
		{
			System.out.println("Objects are same");
		}
		else
		{
			System.out.println("Objects are different");
		}
	}
}
