#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter lowercase String: ");
    gets(str);
    printf("\nIts Uppercase = %s", strupr(str));
    getch();
    return 0;
}