// Server3
// bol nari file

import java.net.*;
import java.io.*;

public class Server3	// why public: package baher jari gela tar code should work
{
	public static void main(String A[]) throws Exception
	{
		System.out.println("Server application is running...");
	
 		ServerSocket ss = new ServerSocket(2100);	// java.io header file mule	// coming from java.net package
		System.out.println("Server is runnig at port number 2100 and waiting for client request");
		
		Socket s = ss.accept();		// java.io header file mule	// Server should accept clients request
		System.out.println("Request of client gets accepted");
	
		PrintStream ps = new PrintStream(s.getOutputStream());		// s. is socket cha object	// bol nara
	
		BufferedReader br1 = new BufferedReader(new InputStreamReader(s.getInputStream()));
		BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));	// keyboard varun input
	
		String str1, str2;
		
		while((str1 = br1.readLine()) != null)
		{
			System.out.println("Client says : "+str1);
			System.out.print("Enter message for client : ");
			str2 = br2.readLine();
			ps.println(str2);
		}
	}
}
