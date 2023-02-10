import java.util.Scanner;

class ArrayX
{
    public int Arr[];   // characteristics
    public int iSize;   // characteristics

    public ArrayX(int No)   // Behaviour
    {
        this.iSize = No;
        this.Arr = new int[iSize];  // constructor use to allocate resource
    }
    public void Accept()    // Behaviour
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the elements :");
        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }
    public void Display()   // Behaviour
    {
        System.out.println("Enter the elements :");
        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
    public int Addition()   // Behaviour
    {
        int iSum = 0;
        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }
}

class ArrayOOP
{
        public static void main(String arg[])
        {
           ArrayX obj1 = new ArrayX(4);
           obj1.Accept();
           obj1.Display();

           int iRet = obj1.Addition();
           System.out.println("Addition is : "+iRet);
        }
}