#include<stdio.h>

//n=15,n=14,13,12,11,10
int sum(int n){
    
    
    //10 == 10
    if(n==10){
        return 0; 
    }

    
    //return 15 + sum(15-1) 15 + 50 = 65
    //return 14 + sum(14-1) 14 + 36 = 50
    //return 13 + sum(13-1) 13 + 23 = 36
    //return 12 + sum(12-1) 12 + 11 = 23
    //return 11 + sum(11-1) 11 + 0 = 11
    return n+sum(n-1);
}

void main()
{
    int x;
   x = sum(15);
   printf("\n x = %d",x);

}