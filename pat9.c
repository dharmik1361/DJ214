#include<stdio.h>
int main()
{
  int i,j,a;
  printf("\nEnter the value:");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
   printf("\n");
   for(j=1;j<=(a-i);j++)
   {
     printf(" ");
   }
   for(j=1;j<=i;j++)
   {
    printf("%d",j);
   }
  }
  return 0;
}