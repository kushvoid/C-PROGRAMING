#include<stdio.h>

/*

1
2 2
3 3 3
.
.

*/
int main()
{
   int i,j;
   for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
        printf("%d ",j%2);
    }
    printf("\n");
   }
   
}