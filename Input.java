// * = sagla -> alshi
// import java.util.Scanner; -> for scanner 

import java.util.*;

class Input
{
    public static void main(String arg[])
    {
        // new is for creating object
        Scanner sobj = new Scanner(System.in);
        int iNo1 = 0, iNo2 = 0;
        int iAns = 0;

        System.out.println("Enter first number");
        iNo1 = sobj.nextInt();     // sobj is scanner object

        System.out.println("Enter second number");
        iNo2 = sobj.nextInt();

        iAns = iNo1 + iNo2;

        System.out.println("Addition is : "+iAns);
    }
}