#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char n;
    printf("Enter lowercase String: ");
    gets(n);
    printf("\nIts Uppercase = %c", strupr(n));
    getch();
    return 0;
}