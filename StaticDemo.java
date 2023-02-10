
class StaticDemo
{
    static
    {
        System.out.println("Inside static block os staticDemo which contains main");
    }
    public StaticDemo()
    {
        System.out.println("Inside Constructor os StaticDemo");
    }
    public static void main(String arg[])
    {
        System.out.println("Inside main");
        
        System.out.println("Value of static No3 : "+Demo.iNo3);
        System.out.println("Value of static No4 : "+Demo.iNo4);

        Demo.gun();    // Demo::gun();
         // Demo obj1;      // reference
        Demo obj1 = new Demo();     // Demo::iNo3 // new keyword is compulsory to create object in java
        Demo obj2 = new Demo(); //  // Demo::iNo4 // new keyword is compulsory to create object in java
        
        obj1.Fun();
    }
}

class Demo
{
    public int iNo1;        // non-static characteristics
    public int iNo2;        // non-static characteristics
    public static int iNo3; // static characteristics
    public static int iNo4; // static characteristics

    static              // Static block
    // static block gets excuted before constructor
    {
        System.out.println("Inside static block");
        iNo3 = 51;
        iNo4 = 101;
    }
  
    public Demo()   // if we create n objects then it will excute but static will get excuted only once
    {
        System.out.println("Inside Constructor");
        iNo1 = 11;
        iNo2 = 21;
    }
    /*static              // Static block
    {
        System.out.println("Inside static block");
        iNo3 = 51;
        iNo4 = 101;
    }*/
    public void Fun()       // // will access only iNo1, iNo2, iNo3, iNo4  // Non static method
    {
        // non static method can access static data as well as non static
        // non static will access everything
        // we can use this keyword 
        System.out.println("Inside non-static method fun");
        System.out.println("Value of No1 : "+this.iNo1);        // this is only applicable is non static
        System.out.println("Value of No2 : "+this.iNo2);
        System.out.println("Value of No3 : "+this.iNo3);
        System.out.println("Value of No4 : "+this.iNo4);

    }
    public static void gun()     // will access only iNo3, iNo4   // Static method
    {
        System.out.println("Inside static method gun");
        // static method can access only static data
        // this is not applicable is static
        // we cannot use this keyword
        /*System.out.println("Value of No1 : "+this.iNo1);       
        System.out.println("Value of No2 : "+this.iNo2);
        System.out.println("Value of No3 : "+this.iNo3);
        System.out.println("Value of No4 : "+this.iNo4);*/

        // System.out.println("Value of No1 : "+iNo1);       
        // System.out.println("Value of No2 : "+iNo2);
        System.out.println("Value of No3 : "+iNo3);
        System.out.println("Value of No4 : "+iNo4);

    }
}
// first static gets excuted then non static