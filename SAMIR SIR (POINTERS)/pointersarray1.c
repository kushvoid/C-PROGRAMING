#include<stdio.h>

//row ->10 --> | | | | | | | | | |
//row ->5 -->| | | | |
//row -->15 -> | | | | | | | |  | | | | | | 

void main()
{
    int a[5]={1,2,3,4,5};
    //a -->sep address
    //1 -->sep address
    //2 --->sep..
    //5...

    printf("\n address of a = %u",&a);
    printf("\n address of 1st index = %u",&a[0]);
    printf("\n address of 2nd index = %u",&a[1]);
    printf("\n address of 3rd index = %u",&a[2]);
    printf("\n address of 4th index = %u",&a[3]);
    printf("\n address of 5th index = %u",&a[4]);
   
}