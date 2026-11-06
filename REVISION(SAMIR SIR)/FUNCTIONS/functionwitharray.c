#include<stdio.h>

void printArray(int a[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("\n i = %d",a[i]);
    }
}

void main()
{
 
    int a[]={1,2,3,4,5};
    printArray(a,5);
    
   
}