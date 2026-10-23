#include<stdio.h>

void main()
{
 
    int a[]={10,20,30,40,50};
    int *p;
    //a address == a[0]

    //copy 0th index address and give it to pointer..

    p = &a[0];

    printf("\n address of  a = %u",&a[0]); // -->value --> 10
    printf("\n address of p copied from a = %u",p);
    
    //if print value from pointer --> 10
    printf("\n value from copied address pointer = %d",*p);

    //if we increse 4 bytes in pointer it will move to 1st index..
    p = p +1; //incresing 4 bytes

    printf("\n after incresing 4 bytes in pointer = %d",*p);

    //if we increse 4 bytes in pointer it will move to 1st index..
    p++;
    printf("\n after incresing 4 bytes in pointer = %d",*p);

    //if we increse 4 bytes in pointer it will move to 1st index..
    p++;
    printf("\n after incresing 4 bytes in pointer = %d",*p);

    //if we increse 4 bytes in pointer it will move to 1st index..
    p++;
    printf("\n after incresing 4 bytes in pointer = %d",*p);






   
}