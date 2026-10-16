#include<stdio.h>

//123
//12
//1
//0
int sumofdigit(int n){

    //123==0 false
    //12 ==0 false
    //1 ==0 false
    if(n==0){
        return 0;
    }

    //return 123%10 + sumof(n/10) = return  3 +sumof(12)     3 +3 = 6
    //return 12%10 + sumo(n/10) = return 2 + sumofdigi(1)    2 + 1 = 3
    //return 1%10 + sumo(n/10) = return 1 + sumof(0)  = 0  = 1 + 0 =1
    
    return n %10 + sumofdigit(n/10);

}

int main()
{
   
    int ans;
    ans = sumofdigit(123);
    printf("\n ans = %d",ans);
   
}