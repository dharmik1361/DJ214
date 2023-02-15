#include<stdio.h>

void main()
{

	int a,b,c,d;

	printf("enter the value of a \n");
	scanf("%d",&a);

	printf("enter the value of b \n");
	scanf("%d",&b);

	printf("enter the value of c \n");
	scanf("%d",&c);
	
	printf("enter the value of d \n");
	scanf("%d",&d);

	if(a>b && a>c && a>d)
	{
		printf("then a is bigger");
	}
	else if(b>c && b>d)
	{
		printf("then b is bigger");
	}
	else if(c>d)
	{
		printf("then c is bigger");
	}
	else
	{
		printf("d is bigger");
	}
}
