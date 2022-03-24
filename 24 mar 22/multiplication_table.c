//multiplication table
#include<stdio.h>

void table(int no1)
{
	int mult=10, ans;
	for(int i=1;i<=10;i++)
	{
		ans=no1*i;
		printf("%d * %d = %d\n",no1,i,ans);
	}
	
}

int main()
{
	int no1 ;
	printf("Enter the number you want table of that Number:\t");
	scanf("%d",&no1);
	table(no1);
	return 0;
}












