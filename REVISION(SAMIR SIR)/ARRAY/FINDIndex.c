#include<stdio.h>

int main()
{
 
    int a[5],i,sum=0,searchelm,pos= -1;

    for(i=0;i<5;i++){
        printf("\n enter %d index value : ",i);
        scanf("%d",&a[i]);
    }

    

    for(i=0;i<5;i++){
        
        printf("\n %d index value = %d",i,a[i]);
    }

    //take elemnt from user
    printf("\n enter element to search :");
    scanf("%d",&searchelm); //55

    for(i=0;i<5;i++){
    
        if(a[i]==searchelm){
            pos = i+1;
            break; //to find fisrst occurance..
        }
    
    }

    if(pos!= -1){
        printf("\n pos found of %d = %d",searchelm,pos);
    }
    else{
        printf("\n %d element not found in array",searchelm);
    }

    


   
}