#include<stdio.h>

void main()
{
 
    //int a=10,b; warning
    int a=10;
    int *b;
    printf("\n value of a = %d",a);//10
    printf("\n address of a = %u",&a); // ....96
    //b = a; //value copy
    b = &a; 
    printf("\n value of b = %d",*b); //pointing value means a value //10
    printf("\n value of b = %d",b); //copie address a address
    printf("\n value of b = %d",&b); //own address
   
}