
class ArrayDemo
{
        public static void main(String Arg[])
        {
            // Ways of creating: Single Dimensional Array

            int Arr1[] = {10,20,30,40};
            // int Arr2[4] = {10,20,30,40}; error(explicit size is not allowed in java)
            int Arr3[] = new int[4]; // // prefer using this syntax (Dynamic memory allocation) use this syntax it is important becz of new keyword and its dynamic memory allocation 
            Arr3[0] = 10;
            Arr3[1] = 20;
            Arr3[2] = 30;
            Arr3[3] = 40;

            // int Arr4[] = new int[4]{10,20,30,40};   // error
            int Arr4[] = new int[]{10,20,30,40};    // prefer using this syntax    // Dynamic memory with initialisation list
            
        }
}