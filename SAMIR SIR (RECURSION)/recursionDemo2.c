#include<stdio.h>

void count(){

    int c=0; //c=0
    c++; //1
    printf("\n count",c);

    if(c==10){
        return;
    }
    count();

}

void main()
{
   
    count();
}