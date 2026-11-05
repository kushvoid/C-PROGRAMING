#include<stdio.h>

int main()
{
 
    int i,j,k;

    for(i=5;i>=1;i--){
        //print space
        for(j=1;j<=5-i;j++){
            printf(" ");
        }
        //print star
        for(k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
   
}