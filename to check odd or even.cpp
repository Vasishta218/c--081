#include<stdio.h>
main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(num%2==0)
	printf("number is even:%d",num);
	else
	printf("number is odd:%d",num);
}
