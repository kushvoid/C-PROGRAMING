#include<stdio.h>

//callstack
//c c++ java python js

void count(int n){

    if(n==0){
        return;
    }
    //callstack filling part
    printf("\n before n = %d",n);
    count(n-1);
    printf("\n after n =%d",n); //empty call stack...


}

void main()
{
   
    count(10);
   
}