#include<stdio.h>

void main()
{
 
    int a=10;
    int arr[10];
    int *p = arr; // no need write & to access adrees
    //long long l1=100;

    printf("size of a = %d",sizeof(a));
    printf("\n size of an array = %d",sizeof(arr));
    printf("\n size of pointer = %d",sizeof(*p));
    //printf("\n size of long = %ld",sizeof(l1));
   
}