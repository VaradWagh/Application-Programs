import java.util.*;

class Collections2
{
	public static void main(String arg[])
	{
		LinkedList <String>lobj = new LinkedList<String>();	// linkedlist of Integer	// internally this line is for 2000 lines of code in(c,c++)
		
		lobj.add("Varad");
		lobj.add("John");
		lobj.add("Roman");
		lobj.add("Seth");
		lobj.add("Conor");
		
		System.out.println("Elements of Linked list are : "+lobj);
	
		lobj.addFirst("Khabib");
		
		System.out.println("Elements of Linked list are : "+lobj);
		
		lobj.addLast("Triple h");
		
		System.out.println("Elements of Linked list are : "+lobj);
		
		// method			class name
		Iterator iobj = lobj.iterator();		// Travelling linked list
		System.out.println("Data using iterator is :");
		while(iobj.hasNext())	// gives true or false(doctor cha example, reception vali bai, ase; patient tar pathv)
		{
			System.out.println(iobj.next());
		}
		
		if(lobj.contains("John"))
		{
			System.out.println("John is present in LL");
		}
		else
		{
			System.out.println("John is not present in LL");	
		}
		
		lobj.remove();
		System.out.println("Elements of Linked list are : "+lobj);
		
		lobj.remove(0);
		System.out.println("Elements of Linked list are : "+lobj);
	
		lobj.removeLast();
		System.out.println("Elements of Linked list are : "+lobj);
		
		System.out.println("Number of elements are : "+lobj.size());
	
		lobj.set(2,"Roman");
		System.out.println("Elements of Linked list are : "+lobj);
		
		lobj.clear();	// delete all elements(like destructor)
		System.out.println("Elements of Linked list are : "+lobj);
	}
}
