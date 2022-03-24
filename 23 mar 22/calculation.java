import java.lang.*;
import java.util.*;

class solve
{
	public int a,b;
	
	public solve(int x, int y)
	{
		a=x;
		b=y;
	}
	
	public void sum()
	{
		int ans;
		ans=a+b;
		System.out.println("Summetion is :" +ans);
	}

	public void sub()
	{
		int ans;
		ans=a-b;
		System.out.println("Subtraction is :" +ans);
	}

	public void div()
	{
		int ans ;
		ans=a/b;
		System.out.println("Division is :" +ans);
	}

	void mult()
	{
		int ans;
		ans=a*b;
		System.out.println("Multiplication is :" +ans);
	}
	
	
}

class calculation
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter First Number :");
		int ino1;
		ino1=sobj.nextInt();
		
		System.out.println("Enter Second Number :");
		int ino2;
		ino2=sobj.nextInt();
		
		solve obj = new solve(ino1,ino2);
		
		obj.sum();
		obj.sub();
		obj.div();
		obj.mult();
		
	}
}