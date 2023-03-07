#include <stdio.h>

int sum(int arr[], int n)
{
    int i, s = 0;
    for(i=0; i<n; i++)
    {
        s += arr[i];
    }
    return s;
}

void main()
{
    int n, i, arr[100], total;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    total = sum(arr, n);
    printf("Sum of array elements is %d", total);
    return 0;
}