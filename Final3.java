// final class
// final class can herit other classes but no one can inherit final class

final class Base
{
// for characteristics write final keyword explicitly
}

class Derived extends Base
{

}

class Final3
{
	public static void main(String arr[])
	{
		Base bobj = new Derived();
	}
}
