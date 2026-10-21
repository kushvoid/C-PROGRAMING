#include<stdio.h>

void main()
{
 
    int a=10;
    int *b;
    int *c;

    b = &a;
    *b = 20;
    printf("\n after cahnge of b value of a = %d",a);
   
}