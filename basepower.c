#include <stdio.h>

// 4,3
// 4,2
// 4,1
// 4,0
int findpow(int base, int exp)
{

    // exp=0
    if (exp == 0)
    {
        return 1;
    }

    // return  4 * findpow(4,2)  4 * 16 = 64
    // return  4 * findpow(4,1)  4 * 4 = 16
    // return  4 * findpow(4,0)  4 * 1 = 4
    return base * findpow(base, exp - 1);
}

void main()
{
    int x;
    x = findpow(4, 3);
    printf("\n x = %d", x);
}