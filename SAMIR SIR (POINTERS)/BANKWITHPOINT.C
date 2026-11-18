#include<stdio.h>


void withdraw(int *totalbalance,int amount){

    printf("\n withdraw called..");
    *totalbalance = *totalbalance - amount; //tb = 10000 - 20000 = 8000
    printf("\n withdraw success...");

}

int main()
{

   int balance =10000;

   withdraw(&balance,2000);
   printf("\n updated balance = %d",balance);

   
}