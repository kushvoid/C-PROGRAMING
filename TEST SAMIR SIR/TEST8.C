#include<stdio.h>
int main(){
    int n[5];
    for(int i=0;i<5;i++){
        printf("Enter value of n[%d]: ",i);
        scanf("%d", &n[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d\n", n[i]);
    }
}