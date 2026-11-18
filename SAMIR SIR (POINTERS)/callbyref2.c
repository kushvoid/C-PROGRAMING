#include<stdio.h>

void addToCart(int *t,int amount){

    *t = *t + amount;
    printf("\n item added to cart..");
}


void main()
{
   int total=0;
   addToCart(&total,10000);
   addToCart(&total,2000);
   addToCart(&total,3000);

   printf("\n total = %d",total);
   
}