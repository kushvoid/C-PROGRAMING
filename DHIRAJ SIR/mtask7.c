/*
    Author: kush
    Description: 
*/

#include <stdio.h>

struct Place
{
    char name[20];
    int placeid;
    char city[20];
} p1, p2, p3, p4, p5;

void scanplace_details(void);
void printplace_details(void);

int main()
{
    int choice;

    do
    {
        printf("\n1----------Scan Place Details");
        printf("\n2----------Print Place Details");
        printf("\n3----------Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                scanplace_details();
                break;

            case 2:
                printplace_details();
                break;

            case 3:
                printf("Exit...\n");
                break;
        }

    } while (choice != 3);

    return 0;
}

void scanplace_details(void)
{
    printf("\nEnter details of Place 1:\n");
    printf("Enter place name: ");
    scanf("%s", p1.name);
    printf("Enter Place ID: ");
    scanf("%d", &p1.placeid);
    printf("Enter city: ");
    scanf("%s", p1.city);

    printf("\nEnter details of Place 2:\n");
    printf("Enter place name: ");
    scanf("%s", p2.name);
    printf("Enter Place ID: ");
    scanf("%d", &p2.placeid);
    printf("Enter city: ");
    scanf("%s", p2.city);

    printf("\nEnter details of Place 3:\n");
    printf("Enter place name: ");
    scanf("%s", p3.name);
    printf("Enter Place ID: ");
    scanf("%d", &p3.placeid);
    printf("Enter city: ");
    scanf("%s", p3.city);

    printf("\nEnter details of Place 4:\n");
    printf("Enter place name: ");
    scanf("%s", p4.name);
    printf("Enter Place ID: ");
    scanf("%d", &p4.placeid);
    printf("Enter city: ");
    scanf("%s", p4.city);

    printf("\nEnter details of Place 5:\n");
    printf("Enter place name: ");
    scanf("%s", p5.name);
    printf("Enter Place ID: ");
    scanf("%d", &p5.placeid);
    printf("Enter city: ");
    scanf("%s", p5.city);

    printf("\nAll place details saved successfully!\n");
}

void printplace_details(void)
{
    printf("\n========== PLACE DETAILS ==========\n");

    printf("\nPlace 1");
    printf("\nPlace Name: %s", p1.name);
    printf("\nPlace ID: %d", p1.placeid);
    printf("\nCity: %s\n", p1.city);

    printf("\nPlace 2");
    printf("\nPlace Name: %s", p2.name);
    printf("\nPlace ID: %d", p2.placeid);
    printf("\nCity: %s\n", p2.city);

    printf("\nPlace 3");
    printf("\nPlace Name: %s", p3.name);
    printf("\nPlace ID: %d", p3.placeid);
    printf("\nCity: %s\n", p3.city);

    printf("\nPlace 4");
    printf("\nPlace Name: %s", p4.name);
    printf("\nPlace ID: %d", p4.placeid);
    printf("\nCity: %s\n", p4.city);

    printf("\nPlace 5");
    printf("\nPlace Name: %s", p5.name);
    printf("\nPlace ID: %d", p5.placeid);
    printf("\nCity: %s\n", p5.city);
}