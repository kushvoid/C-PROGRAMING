#include<stdio.h>

void table(int n, int i)
{
    if(i==11)
    {
        return;
    }

    printf("%d * %d = %d\n", n, i, n*i);

    table(n, i+1);
}

int main()
{
    table(5, 1);

    return 0;
}