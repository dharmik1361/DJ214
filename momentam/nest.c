
#include <stdio.h>

void main()
{
    int a,b,c,d;
    printf("Enter 4 number to find max = ");
    scanf("%d %d %d %d", &a,&b,&c,&d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("%d is a maximum number", a);
            }
        }
    }
    else if (b>c)
    {
        if (b>d)
        {
            printf("%d is a maximum number", d);
        }
    }
    else if (c>d)
    {
        printf("%d is a maximum number", c);
    }
    else
    {
        printf("%d is a maximum number", d);
    }
}