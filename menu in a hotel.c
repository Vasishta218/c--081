#include<stdio.h>
main()
{
	int choice;
	char ch;
	do
	{
	printf("menu\n");
	printf("1-idly\n");
	printf("2-dosa\n");
	printf("3-poori\n");
	printf("4-vada\n");
	printf("5-chapati\n");
	printf("6-upma\n");
	printf("what do u like to order?\n");
	printf("order is\n");
	scanf("choice");
	printf("%d",&choice);
	switch(choice)
	{
		case 1:
		       printf("idly-50");
			   break; 
	    case 2:
		       printf("dosa-60");
			   break; 
		case 3:
		       printf("poori-90");
			   break; 
		case 4:
		       printf("vada-60");
			   break; 
		case 5:
		       printf("chapati-70");
			   break; 
		case 6:
		       printf("upma-50");
			   break; 	   
		default:
		        printf("enter valid choice\n");
				break;   	   
	}
	printf("do u want to order more:\n");
	scanf("%c",&ch);
	}while(ch=='y');
}
