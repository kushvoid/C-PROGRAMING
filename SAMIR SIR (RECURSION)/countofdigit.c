#include<stdio.h>

//4567
//456
//45
//4
int countdigit(int n){

    //4567 false
    //456
    //45
    //4
    if(n>=0 && n<10){
        return 1; //1
    }

    
    //return 1 + counotf(456) 1 + 3 = 4
    //return 1 + counotf(45) 1 + 2 = 3
    //return 1 + counotf(4) 1 + 1 =2
    return 1 + countdigit(n/10);
}

void main()
{
   
    int ans;
    ans = countdigit(4567);
    printf("\n ans = %d",ans);
   
}