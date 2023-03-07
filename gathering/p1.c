#include <stdio.h>

int factorial(int n)
{
    if(n == 0)  // base case
        return 1;
    else
        return n * factorial(n-1);  // recursive case
}

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}