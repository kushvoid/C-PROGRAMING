/*
    AUTOR:KUSH
    DOB:5/11/2026
    OBJECTIVE: STRUCTURE OF TIME
*/

#include<stdio.h>

#define SIZE 3

//Structure declaration
struct TIME{
    int hours;
    int min;
    int seconds;
}t[SIZE];

//Function prototypes
void scantime_details();
void printtime_details();
void searchtime_details();

//Main function
int main()
{
    int choice;
    do{
        printf("\n1----------Scan Time");
        printf("\n2----------Print Time");
        printf("\n3----------Search Time");
        printf("\n4----------Exit");
        printf("\nEnter Your Choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:scantime_details();
                break;

            case 2:printtime_details();
                break;

            case 3:searchtime_details();
                break;

            case 4:printf("\nExit....");
                break;
        }//End of switch

    }while(choice!=4);//End of do...while

    return 0;
}

//Function for Scanning details
void scantime_details()
{
    int i;
    for(i=0; i<SIZE; i++)
    {
        printf("\nEnter details for Time %d:\n",i+1);

        printf("Enter Hours: ");
        scanf("%d",&t[i].hours);

        printf("Enter Minutes: ");
        scanf("%d",&t[i].min);

        printf("Enter Seconds: ");
        scanf("%d",&t[i].seconds);

    }//end of loop
}

//Function for printing details
void printtime_details()
{
    int i;
    for(i=0; i<SIZE; i++)
    {
        printf("\nDetails for Time %d:\n",i+1);

        printf("Time: %02d:%02d:%02d\n",
        t[i].hours,t[i].min,t[i].seconds);

    }//end of loop
}

//Function for searching details
void searchtime_details()
{
    int i,h,m,s,found=0;

    printf("\nEnter Hours to Search: ");
    scanf("%d",&h);

    printf("Enter Minutes: ");
    scanf("%d",&m);

    printf("Enter Seconds: ");
    scanf("%d",&s);

    for(i=0; i<SIZE; i++)
    {
        if(t[i].hours==h && t[i].min==m && t[i].seconds==s)
        {
            printf("\nTime Found!");
            printf("\nTime: %02d:%02d:%02d",
            t[i].hours,t[i].min,t[i].seconds);

            found=1;
            break;
        }
    }//end of loop

    if(found==0)
    {
        printf("\nTime Not Found!");
    }
}