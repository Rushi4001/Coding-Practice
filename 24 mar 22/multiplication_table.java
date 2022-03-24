
import java.lang.*;
import java.util.*;

class table
{
	public int x , ans;
	
	public table(int no)
	{
		x=no;
	}
	
	public void table()
	{
		int mult=10;
			for(int i=1;i<=10;i++)
			{
				ans=x*i;
				System.out.println(+ans);
			}
	
	}
}

class multiplication_table
{
	public static void main(String argv[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number you want table");
		int no;
		no=sobj.nextInt();
		
		table obj = new table(no);
		obj.table();
	}
	
}