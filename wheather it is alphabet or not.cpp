#include<stdio.h>
main()
{
	char ch;
	printf("enter a character=");
	scanf("%c",&ch);
	
	if((ch>='a' && ch<='z')||(ch>='a' && ch<='z'))
	{
		printf("it is an alphabet");
	}
	else
	{
		printf("it is not an alphabet");
		return(0);
	}
}
