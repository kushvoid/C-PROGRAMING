#include <stdio.h>

int sum(int n)
{


    if (n == 94)
    {
        return 0;
    }

    return n + sum(n - 1);
}

void main()
{
    int x;
    x = sum(100);
    printf("\n x = %d", x);
}