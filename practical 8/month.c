#include<stdio.h>

void main()
{
	char month;

	printf("enter the month \n",month);
	scanf("%d",&month);

	switch(month)
	{
case 'J':
	printf("january");
	break;

case 'F':
	printf("february");
	break;

case 'M':
	printf("march");
	break;

case 'A':
	printf("april");
	break;

case 'Y':
	printf("may");
	break;

	case 'E':
	printf("june");
	break;

	case 'U':
	printf("july");
	break;

case 'G':
	printf("august");
	break;

case 'S':
	printf("saptember");
	break;

	case 'O':
	printf("october");
	break;

	case 'N':
	printf("november");
	break;

case 'D':
	printf("december");
	break;

default :
	printf("you have enter the wrong alphabet");
	break;
}

	}