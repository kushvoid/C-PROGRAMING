#include<stdio.h>

void count(int n){
    if(n==11){
        return;
    }

    printf("\n n = %d",n);
    count(n+1);
}

void main()
{
   
    count(1);
   
}