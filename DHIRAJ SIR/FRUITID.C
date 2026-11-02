/*
    AUTHOR: KUSH
    DOC: /11/26
    OBJECTIVE: STRUCTURE OF FRUIT
*/

#include<stdio.h>

#define SIZE 3

struct FRUIT{
    int fruitid;
    char fruitname[50];
    float price;
    float weight;
}f[SIZE];

void scanfruit_details();
void printfuit_details();

int main()
{
    int choice;
    do{
        printf("\n1----------Scan Fruit");
        printf("\n2----------Print Fruit");
        printf("\n3----------Exit");
        printf("\nEnter Your Choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:scanfruit_details();
                break;
            case 2:printfuit_details();
                break;
        }//End of switch

    }while(choice!=3);
    return 0;
}

//Function for Scanning details
void scanfruit_details()
{
    int i;
    for(i = 0; i < SIZE; i++)
    {
        printf("Enter details for Fruit %d:\n", i + 1);
        printf("Enter Fruit ID: ");
        scanf("%d", &f[i].fruitid);
        printf("Enter name: ");
        scanf("%s", f[i].fruitname);
        printf("Enter price: ");
        scanf("%f", &f[i].price);
        printf("Enter weight: ");
        scanf("%f", &f[i].weight);
    }//end of loop
}

void printfuit_details()
{
    int i;
    for(i=0; i<SIZE; i++)
    {
        printf("\nDetails for Fruit %d:\n", i + 1);
        printf("Fruit ID: %d\n", f[i].fruitid);
        printf("Name: %s\n", f[i].fruitname);
        printf("Price: %.2f\n", f[i].price);
        printf("Weight: %.2f\n", f[i].weight);
    }//end of loop
}