#include <stdio.h>
#include <string.h>

void main() 
{
	char name [20];
	int n,i,count;

	printf("enter the value \n");
	gets(name);

	n=strlen(name);

	for (int i = 0; i < n; i++)
{
	
		if(name[i] != name [n-i-1])


		{
			count = 1;
		}
	          

	
}
    if (count)
    {
    	printf("not pelidrome");
    }

    else

    {
    	printf("pelidrome");
    }


}