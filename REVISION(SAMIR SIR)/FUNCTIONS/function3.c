#include<stdio.h>


//with return type no arguments

int demo(){

    return 100;
}
int test(){

    int c=999;

    return c;

}

int add(){

    int a=10,b=20;
    
    return a + b;
}

float pers(){
    return 10.20;
}


void main()
{
   
    int x,y,z;
    float p;
    x = demo();
    printf("\n value of x = %d",x);
    y = test();
    printf("\n value of y =%d",y);
    z = add();
    printf("\n value of z = %d",z);

    printf("\n add = %d",add());
    p = pers();
    printf("\n pers = %f",p);
   
}