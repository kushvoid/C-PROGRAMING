#include<stdio.h>

//n=13
//n=6
//n=3
//n=1
//n=0
void binary(int n){

    if(n==0){
        return;
    }

    //binary(13)13%2 =1
    //binary(6) 6%2 = 0
    //binary(3) 3 %2 = 1
    //binary(1) 1 %2 =1
    //binary(0);
    binary(n/2);
    printf("%d",n%2);
}
int main()
{
   
    int n=13;
    binary(n);
   
}