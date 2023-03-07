#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter upercase String: ");
    gets(str);
    printf("\nIts lowercase = %s", strlwr(str));
    getch();
    return 0;
}