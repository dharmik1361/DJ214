/* leap year */

#include<stdio.h>

void main()
{
	int year,leap;

	printf("enter the year = ");
	scanf("%d",&year);

	if(year % 4 == 0)
	{
		printf("this is a leap year");
	}
	else 
	{
		printf("this is not a leap year");
	}



}