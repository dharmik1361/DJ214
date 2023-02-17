#include <stdio.h>

void main()
{
    char cha;
    printf("Press any Character = ");
    scanf("%c", &cha);

    if (cha >= 'a' && cha <= 'z' || cha >= 'A' && cha <= 'Z')
    {
        printf("%c is alphabet");
    }
    else if (cha >= '0' && cha <= '9')
    {
        printf("%c is digit", ch);
    }
    else
    {
        printf("%c is symbol");
    }
}