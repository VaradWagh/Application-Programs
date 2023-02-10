// main function and file name should be same

// Class definition
class Maths		// class Maths extends Object (Inheritence)
{
    public int iNo1 = 0;    // Characteristics
    public int iNo2 = 0;    // Characteristics

    public Maths()  // Default Constructor
    {
        System.out.println("Inside default constructor");   
    }
    public Maths(int a, int b)  // Parameterised Constructor
    {
        System.out.println("Inside parameterised constructor");
        iNo1 = a;
        iNo2 = b;
    }
    public int Addition()      // Behaviour
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }
    public int Substraction()   // Behaviour
    {
        int iAns = 0;
        iAns = iNo1 - iNo2;
        return iAns;
    }
}   // End of Maths class

class Demo		// class Demo extends Object O is big so internally it is class(internally)  (Inheritence)
{
    public static void main(String arr[])
    {
        System.out.println("Inside main function");

        // Maths mobj1; not allowed
         Maths mobj1 = new Maths();   // object creation in java
         Maths mobj2; 
	 mobj2 = new Maths(10,11);

         int iRet = 0;
         iRet = mobj1.Addition();
         System.out.println("Addition is :" +iRet);

         iRet = mobj2.Addition();
         System.out.println("Addition is : " +iRet);
    
    }
}