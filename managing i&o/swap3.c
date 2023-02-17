#include <stdio.h> 
int main()
{
int a, b, c; 
printf("Enter two integer");
scanf("%d%d", &a, &b);
printf("Before Swapping First variable = %d\n Second variable = %d\n", a,b);
c = a;
a = b;
b = c;
printf("After Swapping First variable = %d\n Second variable = %d\n",a, b);

}