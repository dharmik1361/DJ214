#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s;
    printf("Enter upercase String: ");
    scanf("%c",&s);
    printf("\nIts lowercase = %c", strlwr(s));
    getch();
    return 0;
}