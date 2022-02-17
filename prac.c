#include<stdio.h>
int main()
{
	   int n,f=1,s=0,m,i,r;
	   printf("enter the value of n");     
	   scanf("%d",&n);
	   m=n;
	   while(n!=0)
   {
	   	r=n%10;
	   	f=1;
	   	for(i=1;i<=r;i++)
	   	  {
	   		f=f*i;
		   }
		s=s+f;
		n=n/10;   
	}  
	   
	if(s==m)
    printf("its a Strong number");
	else
	printf("Not a strong number");	
		
}
