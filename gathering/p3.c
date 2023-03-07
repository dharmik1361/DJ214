#include <stdio.h>

int string_length(char str[])
{
    int i, len = 0;
    for(i=0; str[i]!='\0'; i++)
    {
        len++;
    }
    return len;
}

void main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("Length of the string is %d", string_length(str));
    return 0;
}