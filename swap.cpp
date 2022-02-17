#include<stdio.h>
main()
{
	int a=10,b=20,c;
	c=b,b=c,a=c;
	printf("a = %d,b =%d",a,b);
	return 0;
}
