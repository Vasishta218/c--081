#include<stdio.h>
main()
{
	int i,n,f=0;
	printf("value of n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if (i%2!=0)
	f=f+i;
    }
	{
		printf("%d\n",f);
	}
	return(0);
}
