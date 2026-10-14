#include<stdio.h>

//n=10 //n=9 //n=8
void count(int n){

    if(n==0){
        return;
    }

    printf("\n n = %d",n); //10 ,9 ,8
    count(n-1); //count(10-1),count(9-1),....

}

void main()
{
   
    count(10); //1st line
   
}