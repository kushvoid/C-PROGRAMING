#include <stdio.h>

// a = 15,b=25
// a = 25,b=15
// a = 15,b=10
// a = 10,b=5
// a = 5 ,b=0
int hcf(int a, int b)
{

    // 25==0 false
    // 15==0 false
    // 10 ==0 false
    // 5==0 false
    // b==0 true
    if (b == 0)
    {
        return a; // 5
    }

    // return hcf(25,15) //5
    // return hcf(15,10) //5
    // return hcf(10,5) //5
    // return hcf(5,0) //5
    return hcf(b, a % b);
}

void main()
{

    int x;
    x = hcf(15, 25);
    printf("\n x = %d", x);
}