// Server

import java.net.*;
import java.io.*;

public class Server		// why public: package baher jari gela tar code should work
{
	public static void main(String A[]) throws Exception
	{
		System.out.println("Server application is running...");
	
		ServerSocket ss = new ServerSocket(2100);	// coming from java.net package
		System.out.println("Server is runnig at port number 2100 and waiting for client request");
		
		Socket s = ss.accept();		// Server should accept clients request
		System.out.println("Request of client gets accepted");
	}
}
