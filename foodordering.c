#include<stdio.h>
int main()
{
	printf("ENTER ANY NUMBER FROM 1 to 5 TO ORDER YOUR FOOD");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case1:
			printf("FOOD ITEM-PIZZA \n PRICE-RS 239");
			break;
		case 2:
			printf("FOOD ITEM- BURGER \n PRICE-RS 129");
			break;
		case 3:
		    printf("FOOD ITEM-PASTA \n PRICE-RS 179");
			break;
		case 4:	
		    printf("FOOD ITEM-PIZZA \n PRICE-RS 239");
			break;
		case 5:
			printf("FOOD ITEM-SANDWICH \n PRICE-RS 149");
			break;
		default :
			printf("invalid choice");
	}
}
