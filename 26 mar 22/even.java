import java.util.*;

class Find_even
{
	public int no;
	
	Find_even(int no)
	{
		this.no=no;
	}
	
	void evn_no()
	{
		if(no%2==0)
		{
			System.out.println("Given number is Even Number\n");
		}
		else
		{
			System.out.println("Given number is not Even Number\n");
		}
		
	}
	
}

class even
{
	public static void main(String argv[])
	{
		System.out.println("Enter the number");
		Scanner sobj = new Scanner(System.in);
		int no=sobj.nextInt();
		
		Find_even obj = new Find_even(no);
		obj.evn_no();
		
	}
}