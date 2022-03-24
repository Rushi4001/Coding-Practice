#include<stdio.h>

void sum(int a, int b)
{
	int ans;
	ans=a+b;
	printf("Sumetion is : %d\n ",ans);
}

void sub(int x,int y)
{
	int ans;
	ans=x-y;
	printf("Subtraction is :%d\n",ans);
}

void div(int m, int n)
{
	int ans ;
	ans=m/n;
	printf("Division is :%d\n",ans);
}

void mult(int o, int p)
{
	int ans;
	ans=o*p;
	printf("multiplication is :%d\n",ans);
}

int main()
{
	int ino1,ino2;
	
	scanf("%d",&ino1);
	scanf("%d",&ino2);
	
	sum(ino1,ino2);
	sub(ino1,ino2);
	div(ino1,ino2);
	mult(ino1,ino2);
	
	return 0;
}