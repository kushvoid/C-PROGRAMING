#include<stdio.h>

// int findMax(int a,int b){

//     int c;
//     if(a>b){
//         c=a;
//     }
//     else{
//         c =b;
//     }

//     return c;
// }


int findMax(int a,int b){

    if(a>b){
        return a;
    }
    else{
        return b;
    }
}


void main()
{
   
    int max;
    max = findMax(100,20);
    printf("\n max = %d",max);
   
}