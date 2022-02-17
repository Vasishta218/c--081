#include<stdio.h>
main()
{
	int n,r,sum=0,temp;
	printf("enter a value:");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
       r=temp%10;
       sum=sum*10+r;
       temp/=10;
	}
	if(sum==n)
	printf("%d is a palindrome number",n);
	else
	printf("%d is not a palindrome number",n);
}
