#include<stdio.h>

int main()
{
    int a[]={123,456,789},i,sum=0,rem;

    for(i=0;i<3;i++){
        printf("\n element =%d",a[i]);
        //123
        while(a[i]!=0){
            //rem = 123 % 10 = 3,2,1
            rem = a[i] %10;
            sum = sum + rem; //3+2+1
            a[i] = a[i]/10; //12 1 /0
        }
        printf(" sum = %d \n",sum);
        sum=0;
    }
    
   
}