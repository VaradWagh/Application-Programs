import java.io.*;

class BufferedInput
{
    public static void main(String A[])
    {
        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);		// badli
		
		String name = null;
		int Age = 0;
		float  marks = 0.0f;
		
		try
		{
        System.out.println("Enter your name : ");
        name = bobj.readLine();

        System.out.println("Enter your age : ");
        Age = Integer.parseInt(bobj.readLine());

        System.out.println("Enter your marks : ");
        marks = Float.parseFloat(bobj.readLine());
		}
		catch(IOException obj)		// badli bharli ki catch karayala
		{
		
		}
        System.out.println("Name : "+name);
        System.out.println("Age : "+Age);
        System.out.println("Marks : "+marks);
    }
}
