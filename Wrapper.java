import java.io.*;

class Wrapper
{
    public static void main(String A[]) throws IOException
    {
		int no = 11;
		
		Integer iobj = new Integer(no);		// Boxing :- converting primitive to wrapper (covid madhle chocolates)
		System.out.println(no);
		System.out.println(no);
		
		int x = iobj;		// unboxing :- Converting wrapper to primitive (eclaris chocolate)
		System.out.println(x);
    }
}
