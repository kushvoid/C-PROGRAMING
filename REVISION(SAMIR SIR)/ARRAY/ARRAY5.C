#include<stdio.h>
//neon number

int main()
{

        int no=5,sq,rem,sum;
        sq = no *no;

        while(sq!=0){

            rem = sq %10;
            sum = sum+rem;
            sq = sq/10;
        }

        printf("\n sum = %d",sum);
   
}