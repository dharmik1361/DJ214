/* relative opration */

#include<stdio.h>

void main()
{
	int a,b;

	printf("enter the value of a");
	scanf("%d",&a);

	printf("enter the value of b");
	scanf("%d",&b);

if(a>b)
{
	printf("a is bigger");
}
else if(a<b)
{
	printf("b is bigger");
}
else if(a==b)
{
	printf("a and b is equel");
}
else if(a!=b)
{
	printf("a and b is not equel");
}

}