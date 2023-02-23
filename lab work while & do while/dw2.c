#include<stdio.h>

void main()
{
	int i, n;

	printf("Enter the value of n\t");
	scanf("%d", &n);

	i = n;
	do
	{
		printf("%d\n", i);
		i--;
	}while(i >= 1);

	printf("\n");
}