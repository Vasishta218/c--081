#include<stdio.h>
#include<math.h>
main()
{
	int p,r,t;
	float val,ci,result,amt;
	printf("enter p:");
	scanf("%d",&p);
	printf("enter r:");
	scanf("%d",&r);
	printf("enter t:");
	scanf("%d",&t);
	val=1+(float)r/100;
	result=pow(val,t);
	amt=(p*result);
	ci=amt-p;
	printf("%f",ci);
}
