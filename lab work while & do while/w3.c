/*C program to print all natural numbers from 1 to n using while loop */

#include <stdio.h>

void main()
{
    int i, n;

    
    printf("Print all natural numbers up too : ");
    scanf("%d", &n);

   
    i=1;
    while(i<=n)
    {
        printf("%d\n", i);
        i++;
    }

    
}