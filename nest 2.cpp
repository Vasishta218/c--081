#include<stdio.h>
int main()
{
	int n;
	printf("enter n");
	scanf("%d",&n);
	if (n==1)
	{
		printf("n is equal to 1");
	}
	else if(n<10)
	{
		printf("the given number is less than 10");
	}
	else
	{
		printf("the given number is greater than 10");
	}
	return(0);
}
