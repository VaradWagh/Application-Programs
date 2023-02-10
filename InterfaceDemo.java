// Interface is a blue-print of a class which contains ALL abstract methods in it.
// ALL ahe mhnun no need to write abstract keyword
// Interface achieves 100% abstraction

interface Circle
{						// below comments are happens automatically
	float PI = 3.14f;	// public static final float PI = 3.14f;
	
	float Area(float Radius);	// public abstract float Area(float Radius);
	float Circumference(float Radius);	// public abstract float Circumfernece(float Radius)
}

class Marvellous implements Circle
{
	public float Area(float Radius)
	{
		return PI * Radius * Radius;
	}	
	public float Circumference(float Radius)
	{
		return 2 * PI * Radius;
	}
}

class InterfaceDemo
{
	public static void main(String Arr[])
	{
		System.out.println("Value of PI is:"+Circle.PI); // to demonstrates public and static
	//	Circle.PI = 7.12; // error to demonstrate final
		Circle cobj = new Marvellous();
		float Ret = 0.0f;
		Ret = cobj.Area(10.5f);
		System.out.println("Area is:"+Ret);
		Ret = cobj.Circumference(10.5f);
		System.out.println("Circumference is:"+Ret);
	}
}
