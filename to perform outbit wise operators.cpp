#include<stdio.h>;
main()
{
	int a=8,b=22,c=33,d=66;
	printf("bitwise AND : %d\n",a&b);
	printf("bitwise OR", a | b);
	printf("bitwise LEFT SHIFT :%d\n", c << d);
	printf("bitwise RIGHT SHIFT :%d\n", c >> d);
	printf("bitwise EXCLUSIVE OR :%d\n", a ^ b);
}
