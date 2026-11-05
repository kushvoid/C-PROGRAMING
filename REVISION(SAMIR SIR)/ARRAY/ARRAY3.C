#include<stdio.h>

int main()
{
 
    int a[5],i,sum=0,max;


    for(i=0;i<5;i++){
        printf("\n enter %d index value : ",i);
        scanf("%d",&a[i]);
    }

    max = a[0]; //21

    for(i=0;i<5;i++){
        sum = sum+a[i];
        if(a[i]>max){
            max = a[i];
        }
        printf("\n %d index value = %d",i,a[i]);
    }

    printf("\n sum = %d",sum);
    printf("\n max = %d",max);


   
}