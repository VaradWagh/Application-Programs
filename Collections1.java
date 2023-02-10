import java.util.*;

class Collections1
{
	public static void main(String arg[])
	{
		LinkedList <Integer>lobj = new LinkedList<Integer>();	// linkedlist of Integer	// internally this line is for 2000 lines of code in(c,c++)
		
		lobj.add(11);
		lobj.add(21);
		lobj.add(51);
		lobj.add(101);
		lobj.add(111);
		
		System.out.println("Elements of Linked list are : "+lobj);
	
		lobj.addFirst(1);
		
		System.out.println("Elements of Linked list are : "+lobj);
		
		lobj.addLast(121);
		
		System.out.println("Elements of Linked list are : "+lobj);
		
		// method			class name
		Iterator iobj = lobj.iterator();		// Travelling linked list
		System.out.println("Data using iterator is :");
		while(iobj.hasNext())	// gives true or false(doctor cha example, reception vali bai, ase; patient tar pathv)
		{
			System.out.println(iobj.next());
		}
		
		if(lobj.contains(121))
		{
			System.out.println("121 is present in LL");
		}
		else
		{
			System.out.println("121 is not present in LL");	
		}
		
		lobj.remove();
		System.out.println("Elements of Linked list are : "+lobj);
		
		lobj.remove(0);
		System.out.println("Elements of Linked list are : "+lobj);
	
		lobj.removeLast();
		System.out.println("Elements of Linked list are : "+lobj);
		
		System.out.println("Number of elements are : "+lobj.size());
	
		lobj.set(1,500);
		System.out.println("Elements of Linked list are : "+lobj);
		
		lobj.clear();	// delete all elements(like destructor)
		System.out.println("Elements of Linked list are : "+lobj);
	}
}
