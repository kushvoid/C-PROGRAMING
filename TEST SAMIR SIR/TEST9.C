#include<stdio.h>
int main()
{
    int arr[5];
    int i, sum = 0;
    printf("Enter 5 elements:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<5; i++)
    {
        sum = sum + arr[i];
    }
    printf("\nSum of array elements is: %d", sum);
    return 0;
}