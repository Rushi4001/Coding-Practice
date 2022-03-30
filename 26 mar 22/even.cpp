#include<iostream>

using namespace std;

class even
{
	public : int no;
	
	even(int a)
	{
		no=a;
	}
	
	void find_even()
	{
		if(no%2==0)
		{
			cout<<"Given number is Even Number\n";
		}
		else
		{
			cout<<"Given number is not Even Number\n";
		}
	}
	
};

int main()
{
	int no;
	cout<<"Enter number\n";
	cin>>no;
	
	even obj(no);
	obj.find_even();
	return 0;
}