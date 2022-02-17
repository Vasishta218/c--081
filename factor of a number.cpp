#include<stdio.h>
main()
{
	int i,n;
	printf("enter value for n:");
	scanf("%d",&n);
	printf("factors of %d=",i);
	for(n=1;n<=i;n++)
	{
		if(i%n==0)
		printf("%d",i);
	}
}
