#include<stdio.h>
#include<conio.h>

void main()
{

	int principal,rate,time ,intrest;


	printf("\n enter the principal");
	scanf("%d",&principal);

	printf("\n enter the rate ");
	scanf("%d",&rate);

	printf("\n enter the time ");
	scanf("%d",&time);

	intrest=principal*rate*time/100;

	printf("the simpal intrest of %d",intrest);

	


}