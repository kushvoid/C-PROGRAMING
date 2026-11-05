#include<stdio.h>

int main()
{
 
    int a[5],i;

    for(i=0;i<5;i++){
        printf("\n enter %d index value",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++){
        printf("\n %d index value = %d",i,a[i]);
    }


   
}