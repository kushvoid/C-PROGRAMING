#include<stdio.h>

void add(int a,int b);


void main()
{
   
    //add(); Error
    //add(12); //too few arguments in function callC/C++(165)
    add(12,22);
    //add(12,22,33);//error: too many arguments to function 'add'
    add(12.22,33.44); //implicit type cast.
    //add("abc","pqr");
   
}

void add(int a,int b){
    
    printf("\n value of a = %d",a);
    printf("\n value of b = %d",b);

}