#include<stdio.h>

void main()
{
	char week;

	printf("enter the month \n",week);
	scanf("%d",&week)

	switch(week)
	{
case 'S':
	printf("sunday");
	break;

case 'M':
	printf("monday");
	break;

case 'T':
	printf("tuseday");
	break;

case 'W':
	printf("wednsday");
	break;

case 'H':
	printf("thursday");
	break;

	case 'F':
	printf("friday");
	break;

case 'A':
	printf("saturday")
	break;

	default:
	printf("you have enter the wrong alphabet");
	break;
	
}

	}