#include<stdio.h>  
 int main()    
{    
int a,b; 
printf("Enter two integer");
scanf("%d%d", &a, &b);    
printf("\n Before swap a=%d b=%d",a,b);      
a=a+b;    
b=a-b;    
a=a-b;  
printf("\n After swap a=%d b=%d",a,b);    

}  