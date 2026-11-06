#include<stdio.h>

void test(){
    printf("\n test function called...");
}
void demo(); //defination part

void main()
{
   
    test();    
    demo();
   
}

void demo(){
    printf("\n demo function called.. !!");
}