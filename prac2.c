#include<stdio.h>
int main()
{
	 int n,s=0,x,f=1,k,i;
	 printf("enter the value of x");
	 scanf("%d",&x);
	 printf("enter n");
	 scanf("%d",&n);
	 
	 for(i=1;i<=n;i++)
	 {
	 	f=1;
	 	for(k=1;k<=1;k++)
	 	{
	 		f=f*k;
		 }
	}
   s=s+(pow(x,i)/f);
   printf("%d",s);
 
}
