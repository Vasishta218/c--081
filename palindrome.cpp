// write a c program to check whether the given number is palindrome or not by using functions.

#include<stdio.h>
int palindrome();
int main()
{
	palindrome();
}
int palindrome()
{
	int num,res=0,chk,c;
	printf("enter number");
	scanf("%d",&num);
	chk=num;
	while(num>0)
	{
		c=num%10;
		res=res*10+c;
		num=num/10;
	}
	if(chk==res)
	printf("palindrome");
	else
	printf("not palindrome");
}

