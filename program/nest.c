#include<stdio.h> 
 
int main() 
{ 
 int a,b,c,d,e; 
 
 	printf("enter the value of a \n");
	scanf("%d",&a);

	printf("enter the value of b \n");
	scanf("%d",&b);

	printf("enter the value of c \n");
	scanf("%d",&c);
	
	printf("enter the value of d \n");
	scanf("%d",&d);

	printf("enter the value of e \n");
	scanf("%d",&e);

 
 if(a>b && a>c &&  a>d && a>e) 
 {
  printf("a is largest", a); 
 }
 else 
  if(b>c && b>d && b>e)
  { 
   printf("b is largest", b); 
 }
 else 
  if(c>d && c>e)
  { 
   printf("c is largest", c); 
 }
 else 
  if(d>e)
  { 
   printf("d  is largest", d); 
 }
 else
 { 
  printf("e is largest", e); 
 } 

}