#include <stdio.h>

int sum(int n)
{

    // 10 == 10
    if (n == 45)
    {
        return 0;
    }

    return n + sum(n - 1);
}

void main()
{
    int x;
    x = sum(50);
    printf("\n x = %d", x);
}