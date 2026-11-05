#include<stdio.h>

/*

   *
  * * 
 * * *
  * *
   * 


*/
#include <stdio.h>

int main()
{
    int n = 3;  // widest row has n stars

    // Upper half, including the middle row
    for (int i = 1; i <= n; i++)
    {
        for (int s = 0; s < n - i; s++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("* ");
        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--)
    {
        for (int s = 0; s < n - i; s++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("* ");
        printf("\n");
    }

    return 0;
}