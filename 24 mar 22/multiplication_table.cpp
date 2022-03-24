
#include<iostream>
using namespace std;


class multiplication_table
{
	public:
	   int a;
	   int ans;
	   
	multiplication_table(int no)
	{
		a=no;
	}
	
	void table()
	{
		int mult=10;
			for(int i=1;i<=10;i++)
			{
				ans=a*i;
				cout<<ans<<"\n";
			}
	
	}
	
};

int main()
{
	int no;
	cout<<"Enter number you want table";
	cin>>no;
	
	multiplication_table obj(no);
	obj.table();
	return 0;
}
	


