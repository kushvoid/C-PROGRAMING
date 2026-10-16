#include <stdio.h>
//// #include <conio.h>
#define SIZE 2

struct Student
{
    int sid;
    char name[30];
    float fees;
} s[SIZE];

void scanStudentDetails();
void displayStudentDetails();
void search(int sid);
int main()
{
    int choice, id;
    while (1)
    {
        // clrscr();
        printf("\n1.Scan");
        printf("\n2.Display");
        printf("\n3.Search");
        printf("\n4.Exit");
        printf("\nEnter your chice = ");
        scanf("%d, &choice");

        switch (choice)
        {

        case 1:
            scanStudentDetails();
            break;
        case 2:
            displayStudentDetails();
            break;
        case 3:
            printf("\nEnter the sid you want to search = ");
            scanf("%d", &id);
            search(id);
            break;
        case 4:
            return 0;
        } //!end of switch
    } //!end of while loop
    //// getch();
    return 0;
}
void search(int id)
{
    int success = -1, i;
    for (i = 0; i < SIZE; i++)
    {
        if (id == s[i].sid)
        {
            success = i;
            break;
        }
    }

    if (success >= 0)
    {

        printf("\nstd\tname\tfess");
        printf("\n%d\t%s\t%f", s[i].sid, s[i].name, s[i].fees);
    }

    else
    {
        printf("\nSTUDENT NOT FOUND");
    }
}

void scanStudentDetails()
{

    float temp;
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("\nENTER ID, NAME AND FEES FOR STUDENT 1: ");
        scanf("%d", &s[i].sid);
        scanf("%s", s[i].name);
        scanf("%f", &temp);
        s[i].fees = temp;
    }
}

void displayStudentDetails()
{
    int i;
    printf("\nsid\tName\tfees");
    for (i = 0; i < SIZE; i++)
    {

        printf("\n%d\tNAME\tfees");
    }
}
