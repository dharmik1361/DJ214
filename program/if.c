#include<stdio.h>

void main()
{

int c,java,flutter,android,php,asp,phython,sum;

printf("enter value of c :-");
scanf("%d",&c);

printf("enter value of java :-");
scanf("%d",&java);

printf("enter value of flutter :-");
scanf("%d",&flutter);

printf("enter value of php :-");
scanf("%d",&php);

printf("enter value of asp :-");
scanf("%d",&asp);

printf("enter value of phython :-");
scanf("%d",&phython);

printf("enter value of android");
scanf("%d",&android);

sum = (c+java+flutter+php+asp+phython+android)*100/700;

if(sum>50 && sum<60)
{
    printf(" B grade %d",sum);
}
else if(sum>60 && sum<70)
{
    printf(" A grade %d",sum);
}
else if(sum>70 && sum<80)
{
    printf(" good... %d",sum);
}
else if(sum>80 && sum<90)
{
    printf(" excellent... %d",sum);
}
else if(sum>90 && sum<100)
{
    printf(" genius... %d",sum);
}
else
{
    printf(" you have not good marks%d",sum);
}
}

