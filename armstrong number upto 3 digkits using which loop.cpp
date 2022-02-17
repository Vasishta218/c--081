#include<stdio.h>
main()
{
	int a,b,c,*p,*q;
	printf("enter  a value a and b =");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	c=*p;
	*p=*q;
	*q=c;
	printf("%d\n%d",*p,*q);
	return(0);
}
