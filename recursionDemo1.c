#include<stdio.h>

void demo(){

    printf("\n Hello");
    demo(); // recursive case..
}

void main()
{
   
    demo();
   
}