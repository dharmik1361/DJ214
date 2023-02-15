#include<stdio.h>

void main()
{

int c,java,flutter,sum;

printf("enter value of c :-");
scanf("%d",&c);

printf("enter value of java :-");
scanf("%d",&java);

printf("enter value of flutter :-");
scanf("%d",&flutter);

sum = (c+java+flutter)*100/300;

if(sum<=150)
{
    printf("then you have passed the exam %d\n",sum);
}
}