#include<stdio.h>
main()
{
	int D, d;
	printf("Dividend=");
	scanf("%d", &D);
	printf("Divisor = ");
	scanf("%d",&d);
	printf("quotient=%d\n",D/d);
	printf("remainder=%d", D%d);
}
