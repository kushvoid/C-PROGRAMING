#include<stdio.h>

int main()
{
 
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j,sum=0,sum1=0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d",a[i][j]);
            sum = sum+a[i][j];
        }
        printf(" sum= %d",sum);
        printf("\n");
        sum=0;
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum1 = sum1+a[j][i];
        }
        printf(" %d",sum1);
        sum1=0;
    }
    
   
}