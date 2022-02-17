// write a c program to check whether the given number is perfect or not by using functions.

#include<stdio.h>
int perfect();
int main()
{
	perfect();
}
int perfect()
{
	int i,num,res,sum=0;
	printf("enter num");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		res=num%i;
		if(res==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
	{
		printf("perfect number");
	}
	else
	{
		printf("not perfect number");
	}
}
