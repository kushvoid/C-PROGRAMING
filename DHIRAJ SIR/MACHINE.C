/*
    AUTHOR: KUSH
    DOB: 3/11/2026
    OBJECTIVE: STRUCTURE OF MACHINE
*/

#include<stdio.h>

#define SIZE 5

//Structure declaration
struct MACHINE{
    int machineid;
    char machinename[50];
    float price;
}m[SIZE];

//Function prototypes
void scanmachine_details();
void printmachine_details();
void searchmachine_details();

//Main function
int main()
{
    int choice;
    do{
        printf("\n1----------Scan Machine");
        printf("\n2----------Print Machine");
        printf("\n3----------Search Machine");
        printf("\n4----------Exit");
        printf("\nEnter Your Choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:scanmachine_details();
                break;

            case 2:printmachine_details();
                break;

            case 3:searchmachine_details();
                break;

            case 4:printf("\nExit...");
                break;
        }//End of switch

    }while(choice!=4);//End of do...while

    return 0;
}

//Function for Scanning details
void scanmachine_details()
{
    int i;
    for(i=0; i<SIZE; i++)
    {
        printf("\nEnter details for Machine %d:\n",i+1);

        printf("Enter Machine ID: ");
        scanf("%d",&m[i].machineid);

        printf("Enter name: ");
        scanf("%s",m[i].machinename);

        printf("Enter price: ");
        scanf("%f",&m[i].price);

    }//end of loop
}

//Function for printing details
void printmachine_details()
{
    int i;
    for(i=0; i<SIZE; i++)
    {
        printf("\nDetails for Machine %d:\n",i+1);

        printf("Machine ID: %d\n",m[i].machineid);
        printf("Name: %s\n",m[i].machinename);
        printf("Price: %.2f\n",m[i].price);

    }//end of loop
}

//Function for searching details
void searchmachine_details()
{
    int i, id, found=0;

    printf("\nEnter Machine ID to Search: ");
    scanf("%d",&id);

    for(i=0; i<SIZE; i++)
    {
        if(m[i].machineid==id)
        {
            printf("\nMachine Found!");
            printf("\nMachine ID: %d",m[i].machineid);
            printf("\nName: %s",m[i].machinename);
            printf("\nPrice: %.2f",m[i].price);

            found=1;
            break;
        }
    }//end of loop

    if(found==0)
    {
        printf("\nMachine Not Found!");
    }
}