/* C program to find any number divided by only 3 & 5 */
#include<stdio.h>

void main()
{
  int a;
  printf("enter any value");
  scanf("%d",&a);

  div (a);
}
int div(int i)
{
  if (i % 3 == 0 && i % 5 == 0)
  {
    printf("this is divide by 3 & 5");
  }
  else
  {
    printf("this is not divide by 3 & 5");
  }
}
 