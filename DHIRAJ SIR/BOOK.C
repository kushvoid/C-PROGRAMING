/*
    AUTHOR:-KUSH
    DOB:-5/11/2026
    OBJECTIVE: STRUCTURE OF BOOK
*/

#include<stdio.h>

#define SIZE 2

//Structure declaration
struct BOOK{
    int bookid;
    char bookname[50];
    float price;
}b[SIZE];

//Function prototypes
void scanbook_details();
void printbook_details();
void searchbook_details();
void updatebook_details();

//Main function
int main()
{
    int choice;
    do{
        printf("\n1----------Scan Book");
        printf("\n2----------Print Book");
        printf("\n3----------Search Book");
        printf("\n4----------Update Book");
        printf("\n5----------Exit");
        printf("\nEnter Your Choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:scanbook_details();
                break;

            case 2:printbook_details();
                break;

            case 3:searchbook_details();
                break;

            case 4:updatebook_details();
                break;

            case 5:printf("\nExit...");
                break;
        }//End of switch

    }while(choice!=5);//End of do...while

    return 0;
}

//Function for Scanning details
void scanbook_details()
{
    int i;
    for(i=0; i<SIZE; i++)
    {
        printf("\nEnter details for Book %d:\n",i+1);

        printf("Enter Book ID: ");
        scanf("%d",&b[i].bookid);

        printf("Enter name: ");
        scanf("%s",b[i].bookname);

        printf("Enter price: ");
        scanf("%f",&b[i].price);

    }//end of loop
}

//Function for printing details
void printbook_details()
{
    int i;
    for(i=0; i<SIZE; i++)
    {
        printf("\nDetails for Book %d:\n",i+1);

        printf("Book ID: %d\n",b[i].bookid);
        printf("Name: %s\n",b[i].bookname);
        printf("Price: %.2f\n",b[i].price);

    }//end of loop
}

//Function for searching details
void searchbook_details()
{
    int i, id, found=0;

    printf("\nEnter Book ID to Search: ");
    scanf("%d",&id);

    for(i=0; i<SIZE; i++)
    {
        if(b[i].bookid==id)
        {
            printf("\nBook Found!");
            printf("\nBook ID: %d",b[i].bookid);
            printf("\nName: %s",b[i].bookname);
            printf("\nPrice: %.2f",b[i].price);

            found=1;
            break;
        }
    }//end of loop

    if(found==0)
    {
        printf("\nBook Not Found!");
    }
}

//Function for updating details
void updatebook_details()
{
    int i, id, found=0;

    printf("\nEnter Book ID to Update: ");
    scanf("%d",&id);

    for(i=0; i<SIZE; i++)
    {
        if(b[i].bookid==id)
        {
            printf("\nEnter New Book Name: ");
            scanf("%s",b[i].bookname);

            printf("Enter New Price: ");
            scanf("%f",&b[i].price);

            printf("\nBook Details Updated Successfully!");

            found=1;
            break;
        }
    }//end of loop

    if(found==0)
    {
        printf("\nBook Not Found!");
    }
}