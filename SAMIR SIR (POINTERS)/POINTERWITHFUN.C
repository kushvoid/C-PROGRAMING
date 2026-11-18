#include<stdio.h>

void add(int a){
    printf("\n add called..value of a = %d",a);
}

int main()
{
   int x=100; 
   add(12);
   add(x);
   
}