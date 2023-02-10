import java.sql.*;	// 1

class Database1
{
	public static void main(String arg[]) throws Exception
	{
		
		Connection cobj = DriverManager.getConnection("jdbc:mysql://localhost:3306/ppa41");	// 2

		Statement sobj = cobj.createStatement();	// 3	// jdbc cha ha paper ahe(itha liha)
		
		ResultSet robj = sobj.executeQuery("select * from student");	// 4	// resultset is pishwi
		// empty ala tar while loop nahi janar
		while(robj.next())	// 5
		{
			System.out.println("RID : "+robj.getInt("RID"));
			System.out.println("Name : "+robj.getString("Name"));
			System.out.println("City : "+robj.getString("City"));
			System.out.println("Marks : "+robj.getInt("Marks"));
		}
		/*sobj.close();
		cobj.close();
		rbj.close();*/
	}
}
// while(robj.next()) -> next is like true (run till its true)
// DriverManager.getConnection -> in-build


// execute()		create table
// executeQuery()	select. groupby, having,etc
// executeUpdate()	delete/ update /alter /insert
