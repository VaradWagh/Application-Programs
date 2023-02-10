import java.io.*;

class BufferedInput1
{
    public static void main(String A[]) throws IOException
    {
        InputStreamReader iobj = new InputStreamReader(System.in);		// worst way	(becaz JVM will get this and he will get that there is exception)
        BufferedReader bobj = new BufferedReader(iobj);		// badli
        
		// BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));	(both 7,8 lines are combined in one sentence)
		String name = null;
        int Age = 0;
        float marks = 0.0f;

        System.out.println("Enter your name : ");
        name = bobj.readLine();

        System.out.println("Enter your age : ");
        Age = Integer.parseInt(bobj.readLine());		// string to int

        System.out.println("Enter your marks : ");
        marks = Float.parseFloat(bobj.readLine());     // string to float 

        System.out.println("Name : "+name);
        System.out.println("Age : "+Age);
        System.out.println("Marks : "+marks);
    }
}
