/*
    AUTHOR: KUSH ANDRAPIYA
    DOC: 3/11/26
    OBJECTIVE: STRUCTURE of Fruit
*/

#include<stdio.h>

#define SIZE 2

//Structure declaration
struct FRUIT{
    int fruitid;
    char fruitname[50];
    float price;
    float weight;
}f[SIZE];

//Function prototypes
void scanfruit_details();
void printfruit_details();
void printparticular(int id);
int search(int id);
void updatefruit_details(int index);

//Main function
int main()
{
    int choice, id;

    do{
        //clrscr();
        printf("\n1-----------Scan Fruit");
        printf("\n2-----------Print Fruit");
        printf("\n3-----------Search fruit");
        printf("\n4-----------Update fruit");
        printf("\n5-----------Exit");

        printf("\nEnter Your Choice:");
        scanf("%d",&choice);

        switch(choice){

            case 1:
                scanfruit_details();
                break;

            case 2:
                printfruit_details();
                break;

            case 3:
                printf("\nEnter fruit ID to search:");
                scanf("%d",&id);

                id=search(id);

                if(id==-1){
                    printf("\nFruit ID not found..");
                }
                else{
                    printparticular(id);
                }
                break;

            case 4:
                printf("\nEnter fruit ID to update:");
                scanf("%d",&id);

                updatefruit_details(id);
                break;

            case 5:
                printf("\nExiting the program...");

        }//End of switch

    }while(choice!=5);//end of do...while

    // getch();
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

//Function for printing details
void printfruit_details()
{
    int i;

    for(i=0; i<SIZE; i++)
    {
        printf("\nDetails for Fruit %d:\n", i + 1);
        printf("Fruit ID: %d\n", f[i].fruitid);
        printf("Name: %s\n", f[i].fruitname);
        printf("Price: %.2f\n", f[i].price);
        printf("Weight: %.2f\n", f[i].weight);

        // getch();
    }//end of loop
}

//Function for Searching Details
int search(int id)
{
    int i;

    for(i = 0; i < SIZE; i++){
        if(f[i].fruitid==id){
            return i;
        }
    }

    return -1;
}

void printparticular(int id)
{
    printf("\nDetails for Fruit %d:\n", id);
    printf("Fruit ID: %d\n", f[id].fruitid);
    printf("Name: %s\n", f[id].fruitname);
    printf("Price: %.2f\n", f[id].price);
    printf("Weight: %.2f\n", f[id].weight);
}

void updatefruit_details(int index)
{
    int choice;

    index = search(index);

    if(index==-1){
        printf("\nFruit ID not Found...");
        return;
    }
    else{
        printf("\n1-----------Update name");
        printf("\n2-----------Update price");
        printf("\n3-----------Update weight");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nOld Details:\n");
                printparticular(index);

                printf("\nEnter new name: ");
                scanf("%s", f[index].fruitname);

                printf("\nNew Details:\n");
                printparticular(index);
                break;

            case 2:
                printf("\nOld Details:\n");
                printparticular(index);

                printf("\nEnter new price: ");
                scanf("%f", &f[index].price);

                printf("\nNew Details:\n");
                printparticular(index);
                break;

            case 3:
                printf("\nOld Details:\n");
                printparticular(index);

                printf("\nEnter new weight: ");
                scanf("%f", &f[index].weight);

                printf("\nNew Details:\n");
                printparticular(index);
                break;

            default:
                printf("\nInvalid choice.");
        }
    }
}