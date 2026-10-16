#include<stdio.h>
void factor(int n,int i)
{
    if (i>n)
    {
        return;
    }
    if(n%i==0)
    {
        printf("%d\t",i);
    }
    factor(n,i+1);
}
int main()
{
    factor(12,1);
}