#include<stdio.h>

void main()
{
    int num;
    printf("Enter number = ");
    scanf("%d",&num);

    (num%2==0)?printf("%d is a even number",num):printf("%d is a odd number",num);

}