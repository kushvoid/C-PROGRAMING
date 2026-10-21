#include<stdio.h>

void main()
{
 
    int a=10;
    int *b;

    b = &a;

    printf("\n address of a = %u",&a); 
    printf("\n address of b = %u",b);
    printf("\n --------------------------");
    //*b=10;
    //*b++; //it will increse address by 4 bytes
    *b--;

    printf("\n value of a =%d",a); //11
    printf("\n value of b =%d",*b); //11

    printf("\n address of a = %u",&a); 
    printf("\n address of b = %u",b);
   
}