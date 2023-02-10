
class Loops
{
    public static void main(String arg[])
    {
        int Arr[] = {10,20,30,40};
        int iCnt = 0;
        
        System.out.println("Traversal of array using for loop");
// error -        for(iCnt = 0; iCnt <= Arr.length; iCnt++)
        for(iCnt = 0; iCnt < Arr.length; iCnt++)

        {
            System.out.println(Arr[iCnt]);
        }
            
        System.out.println("Traversal of array using while loop");
        iCnt = 0;  // re-intialize- need to initialize becz it will start from 0 otherwise it below syntax will not get executed
        while(iCnt < Arr.length)
        {
            System.out.println(Arr[iCnt]);
            iCnt++;
        }

        System.out.println("Traversal of array using do-while loop");
        iCnt = 0;
        do
        {
            System.out.println(Arr[iCnt]);
            iCnt++;
        }while(iCnt < Arr.length);

        System.out.println("Traversal of array using for-each loop");
        for(int iNo : Arr)  // usually use while travelling full array
        {
            System.out.println(iNo);
        }

    }
}