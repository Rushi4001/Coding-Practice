#include<stdio.h>

void even(int no)
{
	if(no%2==0)
	{
		printf("Given number is Even Number\n");
	}
	else
	{
		printf("Given number is not Even Number\n");
	}
	
}

int main()
{
	int no;
	printf("Enter the number\n");
	scanf("%d",&no);
	even(no);
	return 0;
}