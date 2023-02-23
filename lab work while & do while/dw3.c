#include <stdio.h>
int main ()
{
 int sum=0, i=1, n;

printf("enter any number");
scanf("%d",&n);

 do
  {
   sum = sum+i;
   i++; 
  }while(i <= n); 
 printf("sum natural numbers = %d",sum);
 
}