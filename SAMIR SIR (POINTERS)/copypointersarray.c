#include<stdio.h>

void main()
{
 
    int a[]={100,200,300,400,500};
    int *p,i;

    //copy address to p
    p = &a[0];

    for(i=0;i<5;i++){

        printf("\n value = %d",*p++);
    }

   
}