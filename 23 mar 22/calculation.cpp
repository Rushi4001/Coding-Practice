#include<iostream>

using namespace std;

class calculation
{
	public:
	int a;
	int b;
	int ans;
	
	calculation(int ino1,int ino2)
	{
		a=ino1;
		b=ino2;
	}
	
	void sum()
	{
		int ans;
		ans=a+b;
		cout<<"Summetion is :"<<ans<<"\n";
	}

	void sub()
	{
		int ans;
		ans=a-b;
		cout<<"Subtraction is :"<<ans<<"\n";
	}

	void div()
	{
		int ans ;
		ans=a/b;
		cout<<"division is :"<<ans<<"\n";
	}

	void mult()
	{
		int ans;
		ans=a*b;
		cout<<"multiplication is :"<<ans<<"\n";
	}
};

int main()
{
	int x,y;
	cout<<"Enter first number"<<"\n";
	cin>>x;
	cout<<"Enter second number"<<"\n";
	cin>>y;
	
	calculation obj(x,y);
	obj.sum();
	obj.sub();
	obj.div();
	obj.mult();
	
	return 0;
}