/* arithmatic opration*/

#include<stdio.h>

void main()

{
	int a,b,c;

	printf("enter the value of a");
	scanf("%d",&a);

	printf("enter the value of b");
	scanf("%d",&b);


	c=a+b;
	printf("addition of = %d\n",c);
	c=a-b;
	printf("substraction of a-b =%d\n",c);
	c=a*b;
	printf("multiplication of a*b = %d\n",c);
	c=a/b;
	printf("div of a/b = %d\n",c);
	c=a%b;
	printf("modulo of a%b =%d\n",c);
	

}