#include<stdio.h>
int main()
{
    int a[5],max=0;
    for (int i = 0; i < 5; i++) 
    {
        printf("Enter Value for a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5; i++) 
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("\nMax of 5 elements of Array is: %d",max);
}