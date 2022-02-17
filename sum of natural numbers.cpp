#include<stdio.h>
main()
{
	int i,n,f=1;
	printf("value of n : ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	f+=i;
	{
		printf("%d",f);
	}
	return(0);
}
