// Cloneable(means able to clone) is name of interface


class Employee implements Cloneable
{
	public int Eid;
	public String Name;
	public int Salary;
	
	public Employee(int No, String str, int Value)
	{	
		// parameterised constructor
		this.Eid = No;
		this.Name = str;
		this.Salary = Value;
	}
	public Object clone() throws CloneNotSupportedException
	{
		return super.clone();	// bapa la vicharla(call gela)	// varcha class chi method call karaychi
	}
}

class CloneDemo
{
	public static void main(String A[])
	{
		try
		{		
		
			Employee eobj1 = new Employee(101,"Rahul",11000);
			Employee eobj2 = (Employee)eobj1.clone();		// in this clone is happening and it should be inside try block 
		
			System.out.println("Name of first employee : "+eobj1.Name);
			System.out.println("Name of first employee : "+eobj2.Name);
			
			System.out.println("Name of first employee : "+eobj1.Salary);
			System.out.println("Name of first employee : "+eobj2.Salary);
			
			eobj1.Name = "Sagar";
			
			// by default clone calls deep copy
			System.out.println("Name of first employee : "+eobj1.Name);	// Deep copy
			System.out.println("Name of first employee : "+eobj2.Name);	// Deep copy
		}
		catch(CloneNotSupportedException obj) 
		{
			
		}
	}
}
