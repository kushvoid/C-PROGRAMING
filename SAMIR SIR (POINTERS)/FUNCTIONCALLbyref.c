#include <stdio.h>

void swap(int *a, int *b)
{

    int c;
    printf("\n swap function called..");

    printf("\n inside swap function before swapping value of a = %d", *a);
    printf("\n inside swap function before swapping value of b = %d", *b);

    c = *a; 
    *a = *b;
    *b = c;

    printf("\n inside swap function after swapping value of a = %d",*a);//20
    printf("\n inside swap function after swapping value of b = %d",*b);//10
    
}

void main()
{

    int x = 10, y = 20;
    
    printf("\n main function called..");

    printf("\n inside main beofe swap called x =%d", x);
    printf("\n inside main beofe swap called y =%d", y);

    swap(&x, &y);

    printf("\n inside main after swap called x =%d", x); // 20
    printf("\n inside main after swap called y =%d", y); // 10
}