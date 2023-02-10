// Client

import java.net.*;
import java.io.*;

public class Client		// why public: package baher jari gela tar code should work
{
	public static void main(String A[]) throws Exception
	{
		System.out.println("Client application is running...");
		
		Socket s = new Socket("localhost",2100);		// coming from java.net package		// SBI cha address and number 4(2100) IP address
		System.out.println("Client is waiting for the server to accept the request");
	}
}
