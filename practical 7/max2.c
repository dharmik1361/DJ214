//C program to find largest among two numbers using ternary operator

#include<stdio.h>

void main()
{ 
  
   int a,b,max;    

   printf("Enter two number\n");
   scanf("%d %d",&a,&b);


   max = a>b?a:b; 
     
 
   printf("Largest Number is : %d",max); 

}