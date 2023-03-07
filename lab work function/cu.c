/* C program to find cube of any number using function*/
#include <stdio.h>

int main()
{
    int a;

     printf("enter any value");
     scanf("%d",&a);

    cube(a);

}
int cube(int num)
{
     printf("%d",num * num * num);
     return 0;
}
