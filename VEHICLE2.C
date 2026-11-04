/*
    AUTHOR: KUSH 
    DOB: 4/11/2026
    OBJECTIVE: STRUCTURE OF VEHICLE
*/

#include<stdio.h>

#define SIZE 4

//Structure declaration
struct Vehicle
{
    int vehicleid;
    char name[50];
    float price;
    char type[20];
}v[SIZE];

//Function prototypes
void scanvehicle_details();
void printvehicle_details();
void searchvehicle_details();
void updatevehicle_details();

//Main function
int main()
{
    int choice;

    do
    {
        printf("\n1----------Scan Vehicle");
        printf("\n2----------Print Vehicle");
        printf("\n3----------Search Vehicle");
        printf("\n4----------Update Vehicle");
        printf("\n5----------Exit");

        printf("\nEnter Your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                scanvehicle_details();
                break;

            case 2:
                printvehicle_details();
                break;

            case 3:
                searchvehicle_details();
                break;

            case 4:
                updatevehicle_details();
                break;

            case 5:
                printf("\nExiting the program...");
                break;
        }

    }while(choice!=5);

    return 0;
}

//Function for Scanning details
void scanvehicle_details()
{
    int i;

    for(i=0; i<SIZE; i++)
    {
        printf("\nEnter details for Vehicle %d:\n",i+1);

        printf("Enter Vehicle ID: ");
        scanf("%d",&v[i].vehicleid);

        printf("Enter name: ");
        scanf(" %49[^\n]",v[i].name);

        printf("Enter price: ");
        scanf("%f",&v[i].price);

        printf("Enter type: ");
        scanf(" %19[^\n]",v[i].type);

    }//End of loop
}

//Function for printing details
void printvehicle_details()
{
    int i;

    printf("\nVehicle Details (4 Vehicles)\n");

    printf("\nID\tName\t\tPrice\t\tType");

    for(i=0; i<SIZE; i++)
    {
        printf("\n%d\t%s\t\t%.2f\t%s",
        v[i].vehicleid,
        v[i].name,
        v[i].price,
        v[i].type);

    }//End of loop
}

//Function for searching details
void searchvehicle_details()
{
    int i, id, found=0;

    printf("\nEnter vehicle id to search: ");
    scanf("%d",&id);

    for(i=0; i<SIZE; i++)
    {
        if(v[i].vehicleid==id)
        {
            printf("\nVehicle Found!");
            printf("\nVehicle ID: %d",v[i].vehicleid);
            printf("\nName: %s",v[i].name);
            printf("\nPrice: %.2f",v[i].price);
            printf("\nType: %s",v[i].type);

            found=1;
            break;
        }
    }//End of loop

    if(found==0)
    {
        printf("\nVehicle Not Found!");
    }
}

//Function for updating details
void updatevehicle_details()
{
    int i, id, found=0;

    printf("\nEnter vehicle id to update: ");
    scanf("%d",&id);

    for(i=0; i<SIZE; i++)
    {
        if(v[i].vehicleid==id)
        {
            printf("\nEnter new name: ");
            scanf(" %49[^\n]",v[i].name);

            printf("Enter new price: ");
            scanf("%f",&v[i].price);

            printf("Enter new type: ");
            scanf(" %19[^\n]",v[i].type);

            printf("\nUpdated Vehicle Details:");

            printf("\n%d | %s | %.2f | %s",
            v[i].vehicleid,
            v[i].name,
            v[i].price,
            v[i].type);

            found=1;
            break;
        }
    }//End of loop

    if(found==0)
    {
        printf("\nVehicle Not Found!");
    }
}