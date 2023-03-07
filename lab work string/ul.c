#include <stdio.h>
#include <string.h>

void main()
{
   char s[100] ;
   int i,n;

   printf("\nEnter a string : ");
   gets(s);
   n=strlen(s);

   for (i = 0; i < n; i++) 
   {
      if(s[i] >= 'A' && s[i] <= 'Z') 
      {
      printf("%s\n", strlwr (s));
      break;
      }

      
      else if(s[i] >= 'a' && s[i] <= 'z') 
      {
      printf("%s\n", strupr (s));
      break;
      }
      else
      {
         printf("enter valid value");
         break;
      }
   }
}
