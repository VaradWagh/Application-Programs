import java.util.*;

class Collections8
{
	public static void main(String arg[])
	{		//		key		value
		Hashtable <String, Integer>hobj = new Hashtable<String, Integer>();
		
		hobj.put("PPA",18000);
		hobj.put("LB",17000);
		hobj.put("Python",16500);
		hobj.put("LSP",21000);
		
			//						value(here is 16500)
		System.out.println(hobj.get("Python"));
		hobj.remove("LB");
		
		Enumeration eobj = hobj.keys();
		
		while(eobj.hasMoreElements())
		{
			System.out.println("Data is "+eobj.nextElement());
		}
	}	
}
